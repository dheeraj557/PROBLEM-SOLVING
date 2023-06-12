class Solution 
{
    public:
        int longestConsecutive(vector<int>& nums) 
        {
            int res=0;
            unordered_set<int>s;
            for(int i=0;i<nums.size();i++)
            {
                s.insert(nums[i]);
            }
            for(auto num:nums) 
            {
                if(s.find(num-1)==s.end()) 
                {
                    int next_no=num+1;
                    int tmp = 1;
                    while (s.find(next_no)!=s.end()) 
                    {
                        tmp++;
                        next_no++;
                    }
                    res=max(res, tmp);
                }
            }
            return res;
        }
};