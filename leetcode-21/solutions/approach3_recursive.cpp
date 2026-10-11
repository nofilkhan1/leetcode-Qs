// LeetCode 21 - Merge Two Sorted Lists
// Approach C: recursive - O(n + m) time, O(n + m) call stack.
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
        // Base case: merging with an empty list is the other list.
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        // The smaller head becomes the head of the merged list and its
        // next becomes the merge of the two remainders.
        if (list1->val <= list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
// Trace of [1,2] against [1,3]:
//     1 <= 1 -> head is 1, merge([2], [1,3])
//     2 >  1 -> head is 1, merge([2], [3])
//     2 <= 3 -> head is 2, merge([], [3]) which is 3
//     result 1 -> 1 -> 2 -> 3
// Every call removes exactly one node from consideration, so the depth
// of the recursion is n + m.
// That depth is why the recursive version is the one that can hit the
// judge stack limit on long lists.
// The assignment list1->next = merge(...) rewires an existing node, a
// new ListNode is never created.
// Writing the two base cases one per line keeps the function easy to
// read at a glance:
//     if (!list1) return list2;
//     if (!list2) return list1;
