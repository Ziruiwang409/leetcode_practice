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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;
        if (!root->left && !root->right) return 0;
        //左
        int leftSum = sumOfLeftLeaves(root->left);
        if (root->left && (!root->left->left && !root->left->right))
            leftSum = root->left->val;
        //右
        int rightSum = sumOfLeftLeaves(root->right);
        //中
        return leftSum + rightSum;

    }
};