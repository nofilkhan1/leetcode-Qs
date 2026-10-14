// LeetCode 430 - Flatten a Multilevel Doubly Linked List
// Approach 2: explicit stack - O(n) time, O(depth) space.
// The stack remembers where to continue, so a child chain is never
// walked twice.
//
// Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* prev;
//     Node* next;
//     Node* child;
// };
