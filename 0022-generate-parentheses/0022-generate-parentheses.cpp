class Solution {
public:
    vector<string>ans;
    void helper(int n,int opening,int closing,string &s)
    {
        if(opening==n and closing==opening)
        {
            ans.push_back(s);
            return;
        }
        if (opening<n)
        {
            s.push_back('(');
            helper(n,opening+1,closing,s);
            s.pop_back();
        }
        if (closing<opening)
        {
            s.push_back(')');
            helper(n,opening,closing+1,s);
            s.pop_back();
        }   
    }
    vector<string> generateParenthesis(int n) {
        string s;
        helper(n,0,0,s);
        return ans;
    }
};