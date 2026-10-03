// LeetCode 138 - Copy List with Random Pointer
// Approach 1: interleaving - O(n) time, O(1) extra space.
//
// Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;
//     Node(int _val) : val(_val), next(NULL), random(NULL) {}
// };
// Appends a node holding d and keeps tail pointing at the last node.
void insertAtTail(Node*& head, Node*& tail, int d)
{
    Node* newNode = new Node(d);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
class Solution {
public:
    Node* copyRandomList(Node* head)
    {
        // Step 1: clone every value into a fresh list.
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        for (Node* temp = head; temp != NULL; temp = temp->next)
        {
            insertAtTail(cloneHead, cloneTail, temp->val);
        }
