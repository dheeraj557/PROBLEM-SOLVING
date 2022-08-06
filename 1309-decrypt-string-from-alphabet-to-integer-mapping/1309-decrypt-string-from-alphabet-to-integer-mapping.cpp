class Solution {
public:
   string freqAlphabets(string s) {
        int i = s.size()-1;
        string ans = "";
        while(i >= 0)
        {
            if(s[i] == '#')
            {
                int m = s[i-1] - '0';
                int n = s[i-2]- '0';
                n *= 10;
                char ch = m+n+'a' -1;
                ans.push_back(ch);
                i = i-3;
            }
            else
            {
                 int m = s[i] - '0';
                char ch = m + 'a' -1;
                ans.push_back(ch);
                i--;
            }           
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};