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
private: 
    TreeNode* pre = nullptr;
public:
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        bool left = isValidBST(root->left);
        // pre大于等于root时候返回false因为根据题目pre的数值一定小于root的数值
        if (pre != nullptr && pre->val >= root->val)
            return false;
        pre = root;
        bool right = isValidBST(root->right);
        return left && right;
    }
};