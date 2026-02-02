// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//        ListNode* prev = nullptr;
//        ListNode* curr = head;
//        ListNode* next = nullptr;

//        while(curr != nullptr){
//         next = curr->next;
//         curr->next = prev;

//         prev = curr;
//         curr= next;
//        }
//        return prev;
//     }
// };


class Solution {
public:
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev) {
        // base case
        if (curr == NULL) {
            head = prev;
            return;
        }

        ListNode* forward = curr->next; // store next
        curr->next = prev;              // reverse link
        reverse(head, forward, curr);
    }

    ListNode* reverseList(ListNode* head) {
        reverse(head, head, NULL);
        return head;
    }
};

