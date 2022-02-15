class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,1);
        int len = 1;
        for(int i = 1 ; i < n ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i],1+dp[j]);
                    len = max(len,dp[i]);
                }
            }
        }
        return len;
    }
};