
class Solution {
public:
    Node* flatten(Node* head) {

        Node* curr = head;

        while (curr != NULL) {

            if (curr->child != NULL) {

                Node* nextNode = curr->next;
                Node* childHead = curr->child;

                // Find tail of child list
                Node* temp = childHead;

                while (temp->next != NULL) {
                    temp = temp->next;
                }

                // Connect current with child
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = NULL;

                // Connect child tail with old next
                if (nextNode != NULL) {
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};
