class Solution {
public:
    void helper(vector<vector<int>>&result,int idx,vector<int>&nums)
    {
        if(idx==nums.size()-1)
        {
            result.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            helper(result,idx+1,nums);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        helper(result,0,nums);
        return result;
    }
};