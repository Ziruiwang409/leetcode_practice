class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        unordered_map<int,int> hash_map;
        for (int i = 0; i < nums.size();i++){
            if (hash_map.find(target - nums[i]) == hash_map.end()){
                hash_map.insert({nums[i], i});
            }
            else{
                return {i, hash_map[target - nums[i]]};
            }
        }
        return results;
    }
};