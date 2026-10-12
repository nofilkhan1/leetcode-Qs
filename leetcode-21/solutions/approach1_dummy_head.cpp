// LeetCode 21 - Merge Two Sorted Lists
// Approach A: dummy head - O(n + m) time, O(1) space.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        // The dummy node owns no value, it only anchors the result.
        ListNode dummy(0);
        ListNode* tail = &dummy;
        // Attach the smaller of the two current nodes.
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val <= list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }
            // Always move the tail, otherwise the next write clobbers
            // the node that was just attached.
            tail = tail->next;
        }
        // At most one list still has nodes left, attach it whole.
        tail->next = (list1 != NULL) ? list1 : list2;

        // The first real node sits right after the dummy.
        return dummy.next;
    }
};
// Why the dummy node is worth one extra local:
// the empty list, the single node list and the "one list wins
// completely" case all collapse into the same two lines.
// Trace of [1,2,4] against [1,3,4]:
//     dummy -> 1 -> 1 -> 2 -> 3 -> 4 -> 4
//     list1 consumed 1, 2, 4     list2 consumed 1, 3, 4
// The comparison uses <= so equal values are taken from list1 first,
// which is what keeps the merge stable.
// Nothing is allocated: every node of the result already lived in one
// of the two input lists.
// The two pointer updates must happen in the same branch that attached
// the node, not after the loop.
// A branch that forgets one of those advances either loops forever or
// silently drops the rest of a list.
// The ternary at the end is the same as:
//     if (list1 != NULL) tail->next = list1;
//     else               tail->next = list2;
// Space is constant: dummy and tail are two locals on the stack.
