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

/*
 * 前序遍历
 * pre-order: 中：交换左右child node;左：向左遍历；右：向右遍历*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //终止条件
        if (!root) return root;
        //中
        swap(root->left, root->right);
        //左
        invertTree(root->left);
        //右
        invertTree(root->right);
        return root;
    }
};

/*
 * 后续遍历
 * post-order: 中：交换左右child node;左：向左遍历；右：向右遍历*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //终止条件
        if (!root) return root;
        //左
        invertTree(root->left);
        //右
        invertTree(root->right);
        //中
        swap(root->left, root->right);
        return root;
    }
};

/*
 * 中序遍历
 * in-order: 左：向左遍历；中：交换左右child node;右**：向左遍历*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //终止条件
        if (!root) return root;
        //左
        invertTree(root->left);
        //中
        swap(root->left, root->right);
        //右
        invertTree(root->left);
        return root;
    }
};