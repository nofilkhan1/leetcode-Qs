// LeetCode 234 - Palindrome Linked List
// Approach 2: recursive - O(n) time, O(n) call stack.
// The recursion delivers the second half of the list backwards while a
// front pointer walks the first half forwards.
//
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
