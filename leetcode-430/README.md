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
## Two approaches

| Approach | Time | Space |
|----------|------|-------|
| Iterative splice | O(n) on flat lists, O(n * depth) worst case | O(1) |
| Explicit stack | O(n) | O(depth) |

The splice version pulls a whole child chain up in one step. The stack
version splices one node at a time and never walks a chain twice.
## Order rule

Every node must come out as: the node itself, then its child list, then
the nodes that used to follow it. Both approaches keep that order, the
stack version by pushing `next` before `child`.

## Edge cases

- Empty list, return `NULL`.
- A child list that holds a single node.
- A child on the last node, so there is no `next` to reattach.
- Nesting three or more levels deep.
- Every `child` pointer already `NULL`.
