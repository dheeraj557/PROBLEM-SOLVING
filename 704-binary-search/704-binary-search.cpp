class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int e=nums.size()-1;
        while(l<=e)
        {
            int m=l+(e-l)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]<target)
                l=m+1;
            else
                e=m-1;
        }
        return -1;
    }
};