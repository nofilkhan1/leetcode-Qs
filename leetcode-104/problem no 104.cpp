
class Solution {
public:
    int maxDepth(TreeNode* root) {

        if (root == nullptr)
            return 0;

        int leftHeight = maxDepth(root->left);

        int rightHeight = maxDepth(root->right);

        if (leftHeight > rightHeight)
            return 1 + leftHeight;
        else
            return 1 + rightHeight;
    }
};
