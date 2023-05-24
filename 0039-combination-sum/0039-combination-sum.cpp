class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>&nums,vector<int>&slate,int target,int idx)
    {
        if(target==0)
        {
            ans.push_back(slate);
            return;
        }
        if(target<0)
        {
            return;
        }
        slate.push_back(nums[idx]);
        helper(nums,slate,target-nums[idx],idx);
        slate.pop_back();
        for(int i=idx+1;i<nums.size();i++)
        {
            if(nums[i]<=target)
            {
                slate.push_back(nums[i]);
                helper(nums,slate,target-nums[i],i);
                slate.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>slate;
        helper(candidates,slate,target,0);
        return ans;
    }
};