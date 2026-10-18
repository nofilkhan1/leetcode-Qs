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
#include <queue>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return nullptr;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            // The same three line swap as the recursive version.
            TreeNode* temp = node->left;
            node->left = node->right;
            node->right = temp;

            // Children that exist move on to the next level.
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        return root;
    }
};

// Level order guarantees that once a node is processed its children
// still get processed too, so every node of the tree is visited once
// and no recursion stack is needed.
