// LeetCode 234 - Palindrome Linked List
// Approach 1: reverse the second half - O(n) time, O(1) extra space.
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
public:
    bool isPalindrome(ListNode* head) {
        // An empty list or a single node is a palindrome.
        if (head == NULL || head->next == NULL)
            return true;

        // slow moves one step, fast moves two, so when fast is done
        // slow sits on the start of the second half.
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
