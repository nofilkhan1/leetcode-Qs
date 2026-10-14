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
class Solution {
public:
    Node* flatten(Node* head)
    {
        // curr walks the list. Every time it meets a child list, the
        // whole child chain is spliced in right after curr.
        Node* curr = head;

        while (curr != NULL) {

            if (curr->child != NULL) {

                // Remember where the rest of the list continued and
                // where the child chain starts.
                Node* nextNode = curr->next;
                Node* childHead = curr->child;
