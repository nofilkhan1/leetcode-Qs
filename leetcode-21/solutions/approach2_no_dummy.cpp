// LeetCode 21 - Merge Two Sorted Lists
// Approach B: no dummy head - O(n + m) time, O(1) space.
// The first node is chosen by hand, the rest is the usual merge.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        // An empty list cannot win a comparison, return the other one.
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        // head is the first node of the result, tail is the last one
        // that has been attached so far.
        ListNode* head = NULL;
        ListNode* tail = NULL;
        // There is no dummy node to attach to, so the first node is
        // picked by hand and its list is advanced right away.
        if (list1->val <= list2->val)
        {
            head = list1;
            list1 = list1->next;
        }
        else
        {
            head = list2;
            list2 = list2->next;
        }
        // tail starts on the node that was just picked.
        tail = head;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val <= list2->val)
            {
                tail->next = list1;
                // Advance the list a node was just taken from.
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            // Move the tail onto the node that was just attached.
            tail = tail->next;
        }
        // Whichever list still has nodes becomes the rest of the result.
        if (list1 != NULL)
            tail->next = list1;
