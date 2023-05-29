class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_set<int> nums1_set(nums1.begin(),nums1.end());
        for (int i : nums1_set){
            if (find(nums2.begin(),nums2.end(),i) != nums2.end()){
                intersection.push_back(i);
            }
        }
        return intersection;
    }
};