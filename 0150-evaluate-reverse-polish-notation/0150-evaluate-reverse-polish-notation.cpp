class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        unordered_set<string>s;
        s.insert("+");
        s.insert("-");
        s.insert("/");
        s.insert("*");
        for(int i=0;i<tokens.size();i++)
        {
            if(s.find(tokens[i])!=s.end())
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=0;
                if(tokens[i]=="+")
                {
                    res=b+a;
                }
                else if(tokens[i]=="-")
                {
                    res=b-a;
                }
                if(tokens[i]=="*")
                {
                    res=b*a;
                }
                if(tokens[i]=="/")
                {
                    res=b/a;
                }
                st.push(res);
            }
            else{
                int a=stoi(tokens[i]);
            st.push(a);
            }
        }
        return st.top();
    }
};