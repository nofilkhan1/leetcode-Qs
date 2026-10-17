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
class Solution {
public:
    int maxDepth(TreeNode* root) {

        // An empty tree has depth 0. Every other node adds one level
        // on top of its deepest child.
        if (root == nullptr)
            return 0;

        // Depth of the left subtree.
        int leftHeight = maxDepth(root->left);
        // Depth of the right subtree.
        int rightHeight = maxDepth(root->right);
        // The depth of this node is one more than the deeper child.
        if (leftHeight > rightHeight)
            return 1 + leftHeight;
        else
            return 1 + rightHeight;
    }
};
