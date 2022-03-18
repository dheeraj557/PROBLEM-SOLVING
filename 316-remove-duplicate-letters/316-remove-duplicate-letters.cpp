class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        stack<char> st;
        vector<int> seen(26,0);
        unordered_map<char,int> last_index;
        for(int i=0;i<s.length();i++){
            last_index[s[i]]=i;
        }
        for(int i=0;i<s.length();i++){
            char cur=s[i];
            if(!seen[cur-'a'])
            {
                while(!st.empty() and cur<st.top() and last_index[st.top()]>i)
                {
                    seen[st.top()-'a']=0;
                    st.pop();
                }
                st.push(cur);
                seen[cur-'a']++;
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};