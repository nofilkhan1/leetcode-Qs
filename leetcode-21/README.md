# 21. Merge Two Sorted Lists

LeetCode: https://leetcode.com/problems/merge-two-sorted-lists/ - **Easy**
## Problem

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge them into one sorted list and return its head. The result must be
built out of the existing nodes, no new allocations are allowed.
## Constraints

- Both lists are sorted in non-decreasing order.
- Either list may be empty.
- Values fit in a 32 bit int, so no overflow while comparing.
## Examples

    list1 = [1,2,4]   list2 = [1,3,4]   -> [1,1,2,3,4,4]
    list1 = []        list2 = []        -> []
    list1 = []        list2 = [0]       -> [0]
## Three ways to solve it

1. Dummy head, append whichever node is smaller.
2. No dummy head, pick the first node by hand and then merge.
3. Recursive, merge the remainders of the two lists.
## Approach A - dummy head

Create a throwaway node, keep a `tail` pointer on the result and keep
attaching the smaller of the two current nodes. The answer is
`dummy.next` at the end, so no empty-list special case is needed.
