class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curr_sum = 0;
        int curr_min = 0;
        int sum = accumulate(nums.begin(),nums.end(),0);
        int global_sum  = INT_MIN;
        int global_min = INT_MAX;
        int n = nums.size();
        for(int x: nums){
            curr_sum += x;
            global_sum = max(global_sum,curr_sum);
            curr_sum = max(curr_sum,0); 
        }
        for(int x:nums){
            curr_min += x;
            global_min = min(global_min,curr_min);
            curr_min = min(curr_min,0);
        }
		int circular_subarray = sum-global_min;
        return circular_subarray  == 0 ? global_sum : max(global_sum,circular_subarray);
    }
};