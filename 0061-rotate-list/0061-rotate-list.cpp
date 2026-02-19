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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0)
            return head;
        int length =1;
        ListNode* curr = head;
        while(curr->next){
            length++;
            curr= curr->next;
        }
        k = k%length;
        int steps = length-k;
        curr->next = head;
        ListNode* newTail = head;

        for(int i=1;i<steps;i++){
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
};