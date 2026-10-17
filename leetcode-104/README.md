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
