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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }

    void traversal(TreeNode* root, vector<int>& result){
        if (root == nullptr) return;
        result.push_back(root->val);
        traversal(root->left,result);
        traversal(root->right,result);
    }
};

// 迭代法前序遍历（Iterative preorder traversal)
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if (root == nullptr) return result;
        st.push(root);
        while (!st.empty()){
            TreeNode* parent = st.top();
            st.pop();
            // 中
            result.push_back(parent->val);
            //右
            if (parent->right) st.push(parent->right);
            //左
            if (parent->left) st.push(parent->left);
            //note:左右顺序调换因为stack是先进后出，所以后放入左就先pop左

        }
        return result;
    }
};