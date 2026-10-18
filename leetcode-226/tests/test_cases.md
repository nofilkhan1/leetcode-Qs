# Test cases - LeetCode 226

## 1. Empty tree

    input = []
    output = []

## 2. Single node

    input = [1]
    output = [1]

## 3. The classic tree

    input  = [4, 2, 7, 1, 3, 6, 9]
    output = [4, 7, 2, 9, 6, 3, 1]

## 4. Two nodes, left child

    input = [1, 2]
    output = [1, null, 2]

## 5. Two nodes, right child

    input = [1, null, 2]
    output = [1, 2]

## 6. Left skewed chain

    input = [1, 2, null, 3]
    output = [1, null, 2, null, 3]

The whole chain flips direction, which catches an implementation that
only swaps the root.

## 7. Right skewed chain

    input = [1, null, 2, null, 3]
    output = [1, 2, null, 3]

## 8. Invert twice

    input = [4, 2, 7, 1, 3, 6, 9]
    invert once  -> [4, 7, 2, 9, 6, 3, 1]
    invert again -> [4, 2, 7, 1, 3, 6, 9]

The original tree must come back exactly.
