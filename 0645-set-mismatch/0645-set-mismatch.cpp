class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int missing =0 , repeat = 0;
        int n=nums.size();
        vector<int>result;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(m.find(i)==m.end())
            {
                missing=i;
            }
            if(m[i]==2)
            {
                repeat=i;
            }
        }
        result.push_back(repeat);
        result.push_back(missing);
        return result;
    }
};