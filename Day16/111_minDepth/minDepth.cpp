/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        //左
        int leftHeight = minDepth(root->left);
        //右
        int rightHeight = minDepth(root->right);
        //中
        if (!root->left && root->right)
            return 1 + rightHeight;
        if (root->left && !root->right)
            return 1 + leftHeight;
        return 1 + min(leftHeight, rightHeight);
    }
};