# Dry run - LeetCode 104

## The classic tree

         3
        / \
       9   20
          /  \
         15   7

## The recursion, unwound

    maxDepth(3)
      leftHeight  = maxDepth(9)
        maxDepth(9)   -> leaf: 0 + 1 = 1  ... wait, base first:
        maxDepth(null)= 0, maxDepth(null)= 0
        9: 1 + max(0, 0) = 1
      rightHeight = maxDepth(20)
        left  = maxDepth(15) = 1
        right = maxDepth(7)  = 1
        20: 1 + max(1, 1) = 2
      3: 1 + max(1, 2) = 3

The answer is 3 and every node of the tree was visited exactly once.

## A chain: [1, null, 2]

    maxDepth(1)
      leftHeight  = maxDepth(null) = 0
      rightHeight = maxDepth(2)
        maxDepth(2)
          left  = 0, right = 0  -> 1
      1: 1 + max(0, 1) = 2

Depth 2, and the call stack held two frames at its deepest point.

## The BFS version on the classic tree

    level 0: queue [3]            depth becomes 1
    level 1: queue [9, 20]        depth becomes 2
    level 2: queue [15, 7]        depth becomes 3
    queue empty, return 3

One inner loop per level, the counter moves once per finished level.
