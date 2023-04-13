class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n=pushed.size();
        int i=0;
        int j=0;
        while(i!=pushed.size())
        {
            if(!st.empty() && popped[i]==st.top())
            {
                st.pop();
                i++;
            }
            else
            {             
                if(j<n)
                {
                    st.push(pushed[j]);
                    j++;
                }
                else
                {
                   return false;
                }   
            }
        }
        return true;
    }
};