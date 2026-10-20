class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* h2 = slow->next;
        slow->next = NULL;

        ListNode* prev = NULL;
        ListNode* curr = h2;

        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* temp = head;
        ListNode* t1 = temp->next;
        ListNode* t2 = prev;

        while(t1 != NULL && t2 != NULL){
            ListNode* nextFirst = t1->next;
            ListNode* nextSecond = t2->next;

            temp->next = t2;
            t2->next = t1;

            temp = t1;
            t1 = nextFirst;
            t2 = nextSecond;
        }

        if(t2 != NULL){
            temp->next = t2;
        }
    }
};