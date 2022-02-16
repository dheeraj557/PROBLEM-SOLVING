class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ans;
        int n=s.length();
        int m=t.length();
        if(n>m) 
            return false;
        else if(n==m) 
            return (s==t);
        int i=0,j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else j++;
        }
        return i == n ? 1 : 0;   
    }
};