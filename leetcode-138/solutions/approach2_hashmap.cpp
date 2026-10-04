// LeetCode 138 - Copy List with Random Pointer
// Approach 2: hash map - O(n) time, O(n) space.
// Easier to reason about, but it costs extra memory.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
//     Node(int _val) : val(_val), next(NULL), random(NULL) {}
// };

#include <unordered_map>
using namespace std;
class Solution {
public:
    Node* copyRandomList(Node* head)
    {
        if (head == NULL)
        {
            return NULL;
        }

        unordered_map<Node*, Node*> copy;
        // Pass 1: create a clone for every original node.
        for (Node* temp = head; temp != NULL; temp = temp->next)
        {
            copy[temp] = new Node(temp->val);
        }
