class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int leftprod[n];
        int rightprod[n];
        int leftp = 1,rightp = 1;
        for(int i = 0;i < n;i++){
            leftprod[i] = leftp;
            rightprod[n - i - 1] = rightp;
            leftp = leftp * nums[i];
            rightp = rightp * nums[n - i - 1];
        }
        for(int i = 0;i < n;i++){
            nums[i] = leftprod[i] * rightprod[i];
        }
        return nums;
    }
};