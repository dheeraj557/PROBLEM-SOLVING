class Solution {
    int lcs(string& s1, string& s2, int i1, int i2, vector<vector<int>>& cache) {
        if(i1 >= s1.length()) 
            return 0;
        if(i2 >= s2.length()) 
            return 0;
        if(cache[i1][i2] != -1) 
        {
            return cache[i1][i2];
        }
        int same = 0;
        int one = 0;
        int two = 0;
        if(s1[i1] == s2[i2]) 
        {
            same = 1 + lcs(s1, s2, i1+1, i2+1, cache);            
        } 
        else 
        {
            one = lcs(s1,s2,i1+1,i2,cache);
            two = lcs(s1,s2,i1,i2+1,cache);
        } 
        return cache[i1][i2] = max(same,max(one,two));
    }
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        vector cache(n1, vector(n2, -1));
        int longestSubseq = lcs(word1, word2, 0, 0, cache);
        int del1 = n1 - longestSubseq;
        int del2 = n2 - longestSubseq;
        return del1 + del2;
    }
};