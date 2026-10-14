# Test cases - LeetCode 430

## 1. Empty list

    input = []
    output = []

## 2. Single node, no child

    input = [1]
    output = [1]

## 3. Single node with a child

    input: node 1 with child [2, 3]
    output = [1, 2, 3]

## 4. The classic example

    input:  1 - 2 - 3 - 4 - 5, node 3 has child [6, 7]
    output = [1, 2, 3, 4, 5, 6, 7]

## 5. Child on the last node

    input: 1 - 2, node 2 has child [3, 4]
    output = [1, 2, 3, 4]

There is no next after the child chain, so nothing is reattached.
## 6. Child on the first node

    input: node 1 has child [9], then 2 - 3
    output = [1, 9, 2, 3]

## 7. Three levels of nesting

    input: 1 has child [2], 2 has child [3], 3 has child [4]
    output = [1, 2, 3, 4]

## 8. Every node has a child

    input: 1 - 2 - 3, each with a one node child
    output = [1, child1, 2, child2, 3, child3]

## 9. Long child list in the middle

    input: 1 - 2 - 3 - 4, node 2 has child [10, 11, 12, 13, 14]
    output = [1, 2, 10, 11, 12, 13, 14, 3, 4]

## What each case checks

Empty and single node inputs, a child with no following node, deep
nesting, and a long child chain in the middle of the list. Together they
cover every branch of the splice loop.
