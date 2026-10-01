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
        // Step 1: Create clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;

        while (temp != NULL)
        {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Insert clone nodes between original nodes
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

        // Step 3: Copy random pointers
        temp = head;

        while (temp != NULL)
        {
            if (temp->random != NULL)
            {
                temp->next->random = temp->random->next;
            }

            temp = temp->next->next;
        }

        // Step 4: Separate original and cloned lists
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