# Test cases - LeetCode 104

## 1. Empty tree

    input = []
    output = 0

## 2. Single node

    input = [1]
    output = 1

## 3. The classic tree

    input = [3, 9, 20, null, null, 15, 7]
    output = 3

## 4. Left child only

    input = [1, null, 2]
    output = 2

## 5. Right skewed chain

    input = [1, null, 2, null, 3, null, 4]
    output = 4

The call stack reaches its full length here, this is the O(n) space
worst case of the recursive version.
## 6. Left skewed chain

    input = [1, 2, null, 3, null, 4]
    output = 4

Mirror image of case 5, catches an implementation that only recurses
into one side.

## 7. Two nodes, both shapes

    input = [1, 2]      output = 2
    input = [1, null, 2]  output = 2

## 8. Depth comes from the left only

    input = [1, 2, 3, 4, null, null, null, 5]
    output = 4

The right subtree is a single leaf while the left side decides the
depth.

## 9. Complete tree of depth 4

    input = [1, 2, 3, 4, 5, 6, 7]
    output = 3 for three levels, 4 for a four level complete tree:
    [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15] -> 4

## What each case checks

Empty and single node bases, both skew directions, both single child
shapes, and a tree whose two sides have very different depths.
