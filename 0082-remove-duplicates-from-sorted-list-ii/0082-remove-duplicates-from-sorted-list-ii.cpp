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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while(head != NULL){
            // check for duplicates
            if(head->next != NULL && head->val == head->next->val){
                // skip all nodes with this value
                while(head->next != NULL && head->val == head->next->val){
                    head = head->next;
                }
                prev->next = head->next; // remove all duplicates
            } else {
                prev = prev->next; // move prev only if no duplicate
            }
            head = head->next;
        }
        return dummy->next;
    }
};
