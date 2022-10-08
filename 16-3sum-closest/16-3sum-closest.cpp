class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int dif=INT_MAX;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            int f = nums[i];
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                int t = f+nums[l]+nums[r];
                if(t==target)
                    return target;
                if(abs(t-target)<dif)
                {
                    dif = abs(t-target);
                    ans = t;
                }
                if(t>target)r--;
                else l++;
            }
        }
        return ans;
    }
};