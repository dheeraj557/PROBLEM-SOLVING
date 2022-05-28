class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing=0;
        unordered_set<int>s;
        for(int i:nums)
        {
            s.insert(i);
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(s.find(i)==s.end())
            {
                missing=i;
            }
        }
        return missing;
    }
};