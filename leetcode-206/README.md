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
