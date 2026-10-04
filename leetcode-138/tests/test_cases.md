# Test cases - LeetCode 138

Run every case below against both approaches before submitting.
## 1. Empty list

    Input:  head = []
    Output: []

A `NULL` head must return `NULL` without allocating anything.
## 2. Single node, random = NULL

    Input:  head = [[1,null]]
    Output: [[1,null]]

The clone must be a new node, not the original one.
## 3. Single node with a self loop

    Input:  head = [[1,0]]
    Output: [[1,0]]

`random` points at the node itself, so `clone->random` must point at the
clone and not at the original.
