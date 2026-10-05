// LeetCode 206 - Reverse Linked List
// Approach: iterative three pointers - O(n) time, O(1) space.
//
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // An empty list or a single node is already reversed.
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // prev now sits on what used to be the tail, that is the answer.
        return prev;
    }
};
// Dry run on 1 -> 2 -> 3:
//   prev=NULL curr=1   1 -> 2 -> 3
//   prev=1   curr=2    1 <- 2    3
//   prev=2   curr=3    1 <- 2 <- 3
//   prev=3   curr=NULL 1 <- 2 <- 3
