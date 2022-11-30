class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto x : mp)
        {
            if(s.count(x.second))
            {
                return false;
            }   
            s.insert(x.second);
        }      
        return true;
    }
};