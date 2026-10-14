// LeetCode 430 - Flatten a Multilevel Doubly Linked List
// Approach 1: iterative splice - O(n) time on flat lists, O(n * depth)
// worst case on deeply nested ones, O(1) extra space.
//
// Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* prev;
//     Node* next;
//     Node* child;
// };
