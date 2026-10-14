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
#include <stack>
using namespace std;

class Solution {
public:
    Node* flatten(Node* head)
    {
        if (head == NULL) {
            return NULL;
        }

        stack<Node*> pending;
        Node* curr = head;
        while (curr != NULL) {

            if (curr->child != NULL) {

                // Anything to the right of curr waits on the stack.
                if (curr->next != NULL) {
                    pending.push(curr->next);
                }

                // The child chain is processed right after curr.
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;
            }
            else if (curr->next == NULL && !pending.empty()) {

                // Dead end, pick up the most recently parked branch.
                curr->next = pending.top();
                pending.top()->prev = curr;
                pending.pop();
            }

            curr = curr->next;
        }
        return head;
    }
};

// Push next before child: the stack is LIFO and the child list has to
// come before the parked next list in the flattened order.
//
// Worst case space is the deepest nesting level, one entry per level.
