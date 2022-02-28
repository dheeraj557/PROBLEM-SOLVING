class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        long long result=1;
        int count=0;
        while(j<nums.size())
        {
            result*=nums[j];
            if(result<k)
            count+=(j-i+1);
            else
            {
                while(result>=k && i<j)
                {
                    result/=nums[i];
                    i++;
                }
                 if(result<k)
                 count+=(j-i+1);
            }
            j++;
        }
        return count;
    }
};