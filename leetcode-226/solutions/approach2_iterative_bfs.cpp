// LeetCode 226 - Invert Binary Tree
// Approach 2: iterative BFS - O(n) time, O(width) queue space.
// Same swap, but the nodes are taken level by level from a queue
// instead of from the call stack.
//
// Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
