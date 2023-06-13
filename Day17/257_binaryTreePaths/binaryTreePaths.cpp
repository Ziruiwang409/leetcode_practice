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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        vector<int> path; 
        traversal(root, path, result);
        return result;
    }

    void traversal(TreeNode* root, vector<int>& path, vector<string>& result){
        //中
        path.push_back(root->val);
        //终止条件
        if (!root->left && !root->right){
            string path_str = to_string(path[0]);
            for (int i = 1; i < path.size();i++){
                string new_msg = "->" + to_string(path[i]);
                path_str += new_msg;
            }
            result.push_back(path_str);
        }
        //左
        if (root->left){
            traversal(root->left,path,result);
            path.pop_back();
        }
        //右
        if (root->right){
            traversal(root->right, path, result);
            path.pop_back();
        }

    }
};