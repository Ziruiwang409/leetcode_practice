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
    TreeNode* constructTreeHelper(vector<int>& nums, int left, int right){
        if (left >= right)
            return nullptr;
        
        // find index wiht max value 
        int maxValueIdx = left;
        for (int i = left + 1; i < right; i++){
            if (nums[i] > nums[maxValueIdx])
                maxValueIdx = i;
        }
        // construct new node for this max value
        TreeNode* root = new TreeNode(nums[maxValueIdx]);

        // recursion to left child tree
        root->left = constructTreeHelper(nums,left,maxValueIdx);

        // recursion to right child tree
        root->right = constructTreeHelper(nums,maxValueIdx+1, right);

        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return constructTreeHelper(nums, 0, nums.size());
    }
};