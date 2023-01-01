class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        unordered_map<string,char>n;
        vector<string>words;
        string word="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                words.push_back(word);
                word="";
            }
            else
                word+=s[i];
        }
        words.push_back(word);
        if(words.size()!=pattern.size())
            return false;
        for(int i=0;i<pattern.size();i++)
        {
            m[pattern[i]]=words[i];
        }
        for(int i=0;i<pattern.size();i++)
        {
            n[words[i]]=pattern[i];
        }
        for(int i=0;i<pattern.size();i++)
        {
            if(words[i]!=m[pattern[i]] or pattern[i]!=n[words[i]])
                return false;   
        }
        return true;
    }
};