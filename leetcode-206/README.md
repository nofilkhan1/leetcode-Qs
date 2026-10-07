# 206. Reverse Linked List

LeetCode: https://leetcode.com/problems/reverse-linked-list/ - **Easy**
## Problem

Given the head of a singly linked list, reverse the list and return the
new head.

Every node holds `val` and `next`, and the list may be empty.
## Example

    Input:  head = [1,2,3,4,5]
    Output: [5,4,3,2,1]

    Input:  head = []
    Output: []
## Approach 1 - iterative, three pointers

Walk the list once keeping `prev` (the already reversed part), `curr`
(the node being moved) and `next` (so the rest of the list is not lost):

    next = curr->next
    curr->next = prev
    prev = curr
    curr = next
## Approach 2 - recursive

Reverse the rest of the list first, then push the current node onto the
tail of that reversed remainder:

    ListNode* temp = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
## Complexity

| Approach | Time | Space |
|----------|------|-------|
| Iterative | O(n) | O(1) |
| Recursive | O(n) | O(n) call stack |
## Edge cases

- Empty list, `head == NULL`, must return `NULL`.
- Single node, `head->next == NULL`, returns the same node.
- Two nodes, the classic swap case.
- Long list, the recursive version can exhaust the call stack.
## Notes

The iterative version is the one to remember: constant space, no
recursion depth limit, and the same pointer dance shows up again in
reverse-nodes-in-k-group and palindrome list problems.
