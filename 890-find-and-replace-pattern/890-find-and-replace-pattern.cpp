class Solution {
public:

    bool isValid(string str1, string str2){
        int n = str1.size();
        unordered_map<char,char> mp;
        vector<bool> isVisited(26,false);
        for(int i=0;i<n;i++)
        {
            char c1 = str1[i],c2 = str2[i];
            if(mp[c1] && mp[c1] != c2) 
                return false;
            if(!mp[c1] && isVisited[c2-'a']) 
                return false;
            mp[c1] = c2,isVisited[c2-'a'] = true;
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> res;
        for(auto w : words){
            if(isValid(w,pattern)) res.push_back(w);
        }
        return res;
    }
};