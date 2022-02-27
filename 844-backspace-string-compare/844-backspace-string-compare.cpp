class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(s1.empty()==true)
                    continue;
                else
                    s1.pop();
            }
            else
                s1.push(s[i]); 
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#')
            {
                if(s2.empty()==true)
                    continue;
                else
                    s2.pop();
            }
            else
                s2.push(t[i]); 
        }
        return s1==s2;
    }
};