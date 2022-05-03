class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>nums1(nums.begin(),nums.end());
        sort(nums1.begin(),nums1.end());
        int start=-1,end=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums1[i])
                continue;
            else
            {
                if(start==-1)
                    start=i;
                else
                    end=i;
            }
        }
        if(start==-1)
            return 0;
        return end-start+1;
    }
};