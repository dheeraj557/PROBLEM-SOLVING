class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int max_straight_sum=INT_MIN;
        int min_straight_sum=INT_MAX;
        int temp_maxSum=0;
        int temp_minSum=0;
        int arr_sum=0;
        for(int i=0;i<n;i++)
        {
            arr_sum+=nums[i];
            temp_maxSum+=nums[i];
            max_straight_sum=max_straight_sum<temp_maxSum ? temp_maxSum:max_straight_sum;
            temp_maxSum=temp_maxSum<0?0:temp_maxSum;
            temp_minSum+=nums[i];
            min_straight_sum=min_straight_sum>temp_minSum ? temp_minSum:min_straight_sum;
            temp_minSum=temp_minSum>0?0:temp_minSum;
        }
        if(arr_sum==min_straight_sum)
            return max_straight_sum;
        return max(max_straight_sum,(arr_sum-min_straight_sum));
    }
};