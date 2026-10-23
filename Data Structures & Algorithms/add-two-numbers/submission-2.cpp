class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        int borrow = 0;
        while(temp1 != NULL && temp2 != NULL){
            int sum = temp1->val+temp2->val+borrow;
            
            if(sum > 9){
                while(sum){
                    int dig = sum%10;
                    tail->next = new ListNode(dig);
                    tail = tail->next;
                    borrow = sum/10;
                    break;
                }
            }
            else{
                borrow = 0;
                tail->next = new ListNode(sum);
                tail = tail->next;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp1 != NULL){
            int sum = temp1->val+borrow;
            
            if(sum > 9){
                while(sum){
                    int dig = sum%10;
                    tail->next = new ListNode(dig);
                    tail = tail->next;
                    borrow = sum/10;
                    break;
                }
            }
            else{
                borrow = 0;
                tail->next = new ListNode(sum);
                tail = tail->next;
            }

            temp1 = temp1->next;

        }

        while(temp2 != NULL){
            int sum = +temp2->val+borrow;
            
            if(sum > 9){
                while(sum){
                    int dig = sum%10;
                    tail->next = new ListNode(dig);
                    tail = tail->next;
                    borrow = sum/10;
                    break;
                }
            }
            else{
                borrow = 0;
                tail->next = new ListNode(sum);
                tail = tail->next;
            }

            temp2 = temp2->next;

        }
        if(temp1 == NULL && temp2 == NULL){
            if(borrow != 0){
                tail->next = new ListNode(borrow);
                tail = tail->next;
            }
        }

        return dummy->next;

        
    }
};