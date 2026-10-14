# 430. Flatten a Multilevel Doubly Linked List

LeetCode: https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/ - **Medium**
## Problem

You are given a doubly linked list where in addition to the `next` and
`prev` pointers, every node may have a `child` pointer that leads to a
separate list of its own.

Flatten the list so that every node appears in one level. The flattened
list keeps the same `prev` and `next` pointers and every `child` pointer
must be `NULL` afterwards.

## Example

    Input:  1 - 2 - 3 - 4 - 5
                    |
                    6 - 7
    Output: 1 - 2 - 3 - 4 - 5 - 6 - 7

The child list of node 3 comes right after node 3 and before the old
next node 4.
