// LeetCode 21 - Merge Two Sorted Lists
// Approach B: no dummy head - O(n + m) time, O(1) space.
// The first node is chosen by hand, the rest is the usual merge.
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
