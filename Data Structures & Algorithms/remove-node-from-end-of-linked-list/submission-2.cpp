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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        if (head->next == NULL && n == 1) {
            return NULL;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* temp = prev;

        if (n == cnt + 1) {
            ListNode* del = prev;
            prev = prev->next;
            delete del;
        } else {
            ListNode* temp = prev;
            cnt = 1;

            while (temp != NULL) {
                if (cnt == n - 1) {
                    ListNode* del = temp->next;
                    temp->next = del->next;
                    delete del;
                    break;
                }
                cnt++;
                temp = temp->next;
            }
        }
        curr = prev;
        temp = NULL;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = temp;
            temp = curr;
            curr = nextNode;
        }

        return temp;
    }
};
