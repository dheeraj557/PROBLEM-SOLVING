class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int com=sum-k;
            if(m.find(com)!=m.end())
                count+=m[com];
            m[sum]++;
        }
        return count;
    }
};