# 226. Invert Binary Tree

LeetCode: https://leetcode.com/problems/invert-binary-tree/ - **Easy**
## Problem

Given the root of a binary tree, flip it: every left child becomes a
right child and every right child becomes a left child. Return the root
of the inverted tree.

## Example

    before        4              after        4
                 / \                        / \
                2   7                      7   2
               / \ / \                    / \ / \
              1  3 6  9                  9  6 3  1

## Approaches

| Approach | Time | Space |
|----------|------|-------|
| Recursive DFS | O(n) | O(h) call stack |
| Iterative BFS | O(n) | O(width) queue |

The Visual Studio project uses the recursive version.
