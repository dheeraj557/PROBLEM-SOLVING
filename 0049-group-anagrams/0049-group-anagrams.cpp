class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> m;
        for(auto it:strs)
        {
            string s1 = it;
            sort(s1.begin(),s1.end());
            m[s1].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};