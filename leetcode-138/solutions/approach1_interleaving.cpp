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
        // Step 2: weave the clone nodes between the original nodes.
        Node* orgNode = head;
        Node* cloneNode = cloneHead;

        while (orgNode != NULL && cloneNode != NULL)
        {
            Node* next = orgNode->next;

            orgNode->next = cloneNode;
            orgNode = next;

            next = cloneNode->next;
            cloneNode->next = orgNode;
            cloneNode = next;
        }
        // Step 3: an original node's clone sits at random->next.
        for (Node* temp = head; temp != NULL; temp = temp->next->next)
        {
            if (temp->random != NULL)
            {
                temp->next->random = temp->random->next;
            }
        }
        // Step 4: split the interleaved list back into two lists.
        orgNode = head;
        cloneNode = cloneHead;

        while (orgNode != NULL && cloneNode != NULL)
        {
            orgNode->next = cloneNode->next;
            orgNode = orgNode->next;

            if (orgNode != NULL)
            {
                cloneNode->next = orgNode->next;
            }

            cloneNode = cloneNode->next;
        }

        return cloneHead;
    }
};
