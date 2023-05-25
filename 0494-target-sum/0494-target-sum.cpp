class Solution {
public:
    int count=0;
    void helper(vector<int>& nums,int idx,int target,int sum)
    {
        if(idx==nums.size() and sum==target)
        {
            count++;
            return;
        }
        if(idx==nums.size())
        {
            return;
        }
        helper(nums,idx+1,target,sum+nums[idx]);
        helper(nums,idx+1,target,sum-nums[idx]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        helper(nums,0,target,sum);
        return count;
    }
};