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
