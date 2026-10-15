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
class Solution {
    // front sits on the next node of the first half to compare.
    ListNode* front;

    bool recurse(ListNode* node)
    {
        // Base case: reached the end of the list.
        if (node == NULL)
            return true;
        // Compare on the way back up, once the rest of the list has
        // been visited. The && short circuits, so a mismatch stops the
        // remaining comparisons.
        bool ok = recurse(node->next) && (front->val == node->val);

        // One step forward in the first half.
        front = front->next;

        return ok;
    }
