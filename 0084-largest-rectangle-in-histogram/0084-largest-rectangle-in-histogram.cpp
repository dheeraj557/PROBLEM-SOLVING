class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int result=0;
        int n=heights.size();
        vector<int>leftmin(n,-1),rightmin(n,-1);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                leftmin[i]=-1;
            }
            else
            {
                leftmin[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                rightmin[i]=n;
            }
            else
            {
                rightmin[i]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            result=max(result,(rightmin[i]-leftmin[i]-1)*heights[i]);
        }
        return result;
    }
};