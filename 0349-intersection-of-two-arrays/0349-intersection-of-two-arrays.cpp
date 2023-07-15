class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_set<int>s,s1;
        for(int i:nums2)
        {
            s.insert(i);
        }
        for(int i:nums1)
        {
            if(s.find(i)!=s.end())
            {
                s1.insert(i);
            }
        }
        for(int i:s1)
        {
            result.push_back(i);
        }
        return result;
    }
};