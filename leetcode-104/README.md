# 104. Maximum Depth of Binary Tree

LeetCode: https://leetcode.com/problems/maximum-depth-of-binary-tree/ - **Easy**
## Problem

Given the root of a binary tree, return its maximum depth: the number of
nodes along the longest path from the root node down to the farthest
leaf.

## Examples

    [3, 9, 20, null, null, 15, 7]  -> 3
    []  -> 0
    [1]  -> 1
    [1, null, 2]  -> 2
## Approaches

| Approach | Time | Space |
|----------|------|-------|
| Recursive DFS | O(n) | O(h) call stack, h = height |
| Iterative BFS | O(n) | O(width) queue, width = nodes on one level |

The Visual Studio project uses the recursive version, which is the
shortest one and directly mirrors the definition of depth.
## How the recursion computes depth

    depth(empty)  = 0
    depth(node)   = 1 + max(depth(left), depth(right))

Worked out on [3, 9, 20, null, null, 15, 7]:

    depth(9)  = 1  (leaf)
    depth(15) = 1, depth(7) = 1
    depth(20) = 1 + max(1, 1) = 2
    depth(3)  = 1 + max(1, 2) = 3
## Edge cases

- Empty tree, depth 0.
- Single node, depth 1.
- A chain skewed to the left or to the right, depth equals the node
  count and the recursion stack reaches the same length.
- Depth decided by one deep side while the other side is nearly flat.

## Follow-ups

- 111 Minimum Depth of Binary Tree, the same walk where the shallow
  side counts and a node with only one child is not a leaf.
- 102 / 107 Level order traversals, which the BFS version of this
  problem already computes level by level.
