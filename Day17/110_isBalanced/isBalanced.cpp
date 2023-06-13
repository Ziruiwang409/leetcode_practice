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
    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }

    int getHeight(TreeNode* root) {
        //终止条件
        if (root == nullptr) return 0;
        //左
        int left_height = getHeight(root->left);
        if (left_height == -1) return -1;
        //右
        int right_height = getHeight(root->right);
        if (right_height == -1) return -1;
        //中
        if (abs(left_height - right_height) > 1)
            return -1;
        else
            return 1 + max(left_height, right_height);
    }
};