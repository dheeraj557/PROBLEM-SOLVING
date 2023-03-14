class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index=-1,prefixSum=0,n=nums.size(),sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        for(int i=0;i<n;i++)
        {
            if(prefixSum==(sum-nums[i]-prefixSum))
            {
                index=i;
                break;
            }
            prefixSum+=nums[i];
        }
        return index;
    }
};