class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size()<k) 
            return 0;
        unordered_map<char,int> freq;
        for(auto a:s) 
            ++freq[a];
        int i=0;
        while(i<s.size() and freq[s[i]]>=k) 
            ++i;
        if(i==s.size()) 
            return i;
        if(i==0) 
            return (s.size()>1)?longestSubstring(s.substr(1,s.size()-1),k):0;
        return max(longestSubstring(s.substr(0,i),k),longestSubstring(s.substr(i,s.size()-i),k));
    }
};