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
#include <queue>
using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;

        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        // One iteration per level: the queue holds exactly the nodes
        // of the current level when the inner loop starts.
        while (!q.empty()) {
            int levelSize = q.size();

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
            }

            depth++;
        }

        return depth;
    }
};

// Depth is counted once per completed level, which is why the counter
// moves outside the inner loop. Counting per node instead produces a
// number with no relation to the tree height.
