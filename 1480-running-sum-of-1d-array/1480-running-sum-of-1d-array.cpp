class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int sum=nums[0];
        res[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            sum+=nums[i];
            res[i]=sum;
        }
        return res;
    }
};