class Solution {
public:
    int maxSum(int i, int n, vector<int> &nums, vector<int> &dp) {
        if(i >= n)
            return 0;
        if(dp[i] != -1)
            return dp[i];
        return dp[i] = max(nums[i] + maxSum(i + 2, n, nums, dp), maxSum(i + 1, n, nums, dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        if(n == 1)
            return nums[0];
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        int opt1 = maxSum(0, n - 1, nums, dp1);
        int opt2 = maxSum(1, n, nums, dp2);
        // cout << opt1 << " " << opt2 << endl;
        return max(opt1, opt2);
    }
};