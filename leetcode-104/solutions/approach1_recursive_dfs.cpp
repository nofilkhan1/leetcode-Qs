// LeetCode 104 - Maximum Depth of Binary Tree
// Approach 1: recursive DFS - O(n) time, O(h) call stack where h is the
// height of the tree, O(n) in the worst case of a skewed tree.
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
