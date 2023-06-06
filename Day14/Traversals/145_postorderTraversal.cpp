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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }

    void traversal(TreeNode* root, vector<int>& result){
        if (root == nullptr) return;
        traversal(root->left,result);
        traversal(root->right,result);
        result.push_back(root->val);
    }
};

//迭代法后续遍历（Iterative postorder traversal)
//note: 和前序遍历的不同点在于加入stack的顺序变成中右左然后将输出的vector反转即可
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if (root == nullptr) return result;
        st.push(root);
        while (!st.empty()){
            TreeNode* parent = st.top();
            st.pop();
            // 中
            result.push_back(parent->val);
            //左
            if (parent->left) st.push(parent->left);
            //右
            if (parent->right) st.push(parent->right);
            //note:左右顺序调换因为stack是先进后出，所以后放入左就先pop左

        }
        reverse(result.begin(),result.end());
        return result;
    }
};