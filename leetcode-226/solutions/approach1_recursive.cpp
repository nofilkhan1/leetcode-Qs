// LeetCode 226 - Invert Binary Tree
// Approach 1: recursive DFS - O(n) time, O(h) call stack.
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
    TreeNode* invertTree(TreeNode* root)
    {
        // An empty tree inverts to an empty tree.
        if (!root)
        {
            return 0;
        }

        // Swap the two children with a temporary pointer.
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // The children themselves still have to be inverted, so the
        // same three steps run on both subtrees.
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};

// Swapping before recursing means every level is flipped top down, but
// the order does not matter: flipping a node twice puts it back, so
// whichever order the recursion picks the final shape is the same.
//
// The function runs once per node, so the work is O(n) and the call
// stack holds one frame per level.
