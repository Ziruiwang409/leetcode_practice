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
    int countNodes(TreeNode* root) {
        //终止条件
        if (root == nullptr) return 0;
        int leftHeight = 0;
        int rightHeight = 0;
        TreeNode* left = root ->left;
        TreeNode* right = root->right;
        while (left){
            leftHeight++;
            left = left->left;
        }
        while (right){
            rightHeight++;
            right = right->right;
        }
        if (leftHeight == rightHeight)
            return (2<<leftHeight) - 1;
        //左
        int countLeft = countNodes(root->left);
        //右
        int countRight = countNodes(root->right);
        //中
        return 1 + countLeft + countRight;

    }
};