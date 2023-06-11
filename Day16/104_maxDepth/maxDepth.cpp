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
    /* 这道题是后序遍历解法（因为二叉树的高度就等于二叉树的最大深度）*/
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        //左
        int leftHeight = maxDepth(root->left);
        //右
        int rightHeight = maxDepth(root->right);
        //中
        return 1 + max(leftHeight,rightHeight);
    }
};