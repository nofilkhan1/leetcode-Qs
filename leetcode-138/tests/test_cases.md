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
## 4. Random pointing at NULL in the middle

    Input:  head = [[1,null],[2,null],[3,null]]
    Output: [[1,null],[2,null],[3,null]]

Nothing breaks if every `random` is `NULL`.
## 5. Random pointing backwards

    Input:  head = [[3,null],[2,0],[1,2]]
    Output: [[3,null],[2,0],[1,2]]

Backwards links are the case that catches an approach which only walks
the list forwards once.
