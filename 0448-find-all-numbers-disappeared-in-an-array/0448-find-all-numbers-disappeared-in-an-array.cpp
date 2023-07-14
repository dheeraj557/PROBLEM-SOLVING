class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>res;
        for(int i:nums)
        {
            s.insert(i);
        }
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            if(s.find(i)==s.end())
            {
                res.push_back(i);
            }
        }
        return res;
    }
};