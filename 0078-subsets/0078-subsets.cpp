class Solution {
public:
    void helper(int curr_idx,vector<int>&slate,vector<vector<int>>&res,vector<int>&nums)
    {
        if(curr_idx==nums.size())
        {
            res.push_back(slate);
            return;
        }
        helper(curr_idx+1,slate,res,nums);
        slate.push_back(nums[curr_idx]);
        helper(curr_idx+1,slate,res,nums);
        slate.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>slate;
        helper(0,slate,res,nums);
        return res;
    }
};