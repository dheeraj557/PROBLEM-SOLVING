class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums)
        {
            m[i]++;
        }
        for(int i:nums)
        {
            if(m[i]>=2)
                return i;
        }
        return 0;
    }
};