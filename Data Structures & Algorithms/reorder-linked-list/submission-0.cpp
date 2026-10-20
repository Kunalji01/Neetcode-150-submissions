/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {

        vector<int> data;

        ListNode* temp = head;
        

        while(temp != NULL){
           data.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = data.size()-1;

        temp = head;
        int cnt = 0;

        while(temp != NULL){
            if(cnt%2 == 0){
                temp->val = data[i];
                i++;
            }
            else{
                temp->val = data[j];
                j--;
            }

            cnt++;
            temp = temp->next;
        }

        
    }
};