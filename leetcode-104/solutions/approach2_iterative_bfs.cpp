// LeetCode 104 - Maximum Depth of Binary Tree
// Approach 2: iterative BFS - O(n) time, O(width) space for the queue,
// where width is the largest number of nodes on a single level.
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
