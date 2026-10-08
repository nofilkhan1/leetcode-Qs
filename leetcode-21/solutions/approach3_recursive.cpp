// LeetCode 21 - Merge Two Sorted Lists
// Approach C: recursive - O(n + m) time, O(n + m) call stack.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        // Base case: merging with an empty list is the other list.
        if (list1 == NULL)
            return list2;
