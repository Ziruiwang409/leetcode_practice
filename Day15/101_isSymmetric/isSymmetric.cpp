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
    bool isSymmetric(TreeNode* root) {
        return symmetric_helper(root->left, root->right);
    }

    bool symmetric_helper(TreeNode* left_node, TreeNode* right_node){
        if (!left_node && right_node) return false;
        else if (left_node && !right_node) return false;
        else if (!left_node && !right_node) return true;
        else if (left_node->val != right_node->val) return false;

        return symmetric_helper(left_node->left, right_node->right) && symmetric_helper(left_node->right, right_node->left);
    }
};