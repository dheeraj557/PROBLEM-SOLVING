class Solution {
public:
    bool isAnagram(string s, string t) {
         unordered_map<char, int> dict;
        if(s.size() != t.size()) 
            return false;
        for(int i = 0 ; i < s.size(); i++)
        {
            dict[s[i]]++;
            dict[t[i]]--;
        }
        for(auto item: dict)
        {
            if(item.second) 
                return false;
        }
        return true;
    }
};