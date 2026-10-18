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
## How the swap works

For every node, exchange its left and right pointer, then do the same
for both children:

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

In C++ the three lines are just `swap(root->left, root->right)`.

## Edge cases

- Empty tree, return NULL.
- Single node, nothing to flip.
- A chain skewed to one side, the whole chain reverses direction.
- A tree that is already inverted, comes back identical.

## Follow-ups

- 101 Symmetric Tree, an inverted copy compared against itself.
- 100 Same Tree, the comparison step 101 needs.
- 110 Balanced Tree, checks depths after this kind of restructuring.
