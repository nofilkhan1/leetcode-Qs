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
## Approach A in one loop

    while (a && b) {
        if (a->val <= b->val) { tail->next = a; a = a->next; }
        else { tail->next = b; b = b->next; }
        tail = tail->next;
    }
    tail->next = a ? a : b;
## Approach B - no dummy head

Pick the smaller of the two heads by hand to become the result head,
then run exactly the same loop. This is the version in
`problem no 21.cpp`.
## Why approach B needs the extra if

With no dummy node there is nothing to attach the first node to, so the
first comparison happens once before the loop and the loop only handles
the rest. Getting `head` and `tail` mixed up here is the usual bug.
## Approach C - recursive

If either list is empty, return the other. Otherwise the smaller head
becomes the head of the result and its `next` is the merge of the two
remainders:

    if (a->val <= b->val) { a->next = merge(a->next, b); return a; }
## Complexity

| Approach | Time | Space |
|----------|------|-------|
| Dummy head | O(n + m) | O(1) |
| No dummy head | O(n + m) | O(1) |
| Recursive | O(n + m) | O(n + m) call stack |
## The merge is stable

Whenever the two values are equal the code takes the node from `list1`
first, so equal values keep the order they had in the input lists.
## Dry run of [1,2,4] against [1,3,4]

    take 1 from list1  -> 1
    take 1 from list2  -> 1 1
    take 2 from list1  -> 1 1 2
    take 3 from list2  -> 1 1 2 3
    take 4 from list1  -> 1 1 2 3 4
    list1 empty, attach the rest of list2 -> 1 1 2 3 4 4
## Edge cases

- Both lists empty, return `NULL`.
- One list empty, return the other one untouched.
- One list exhausted far before the other.
- Every value of one list smaller than every value of the other.
- Equal values, to check that the merge stays stable.
