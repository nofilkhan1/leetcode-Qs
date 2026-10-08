// LeetCode 21 - Merge Two Sorted Lists
// Approach A: dummy head - O(n + m) time, O(1) space.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        // The dummy node owns no value, it only anchors the result.
        ListNode dummy(0);
        ListNode* tail = &dummy;
