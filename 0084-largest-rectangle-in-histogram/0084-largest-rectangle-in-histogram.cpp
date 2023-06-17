/*class Solution {
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
                rightmin[i]=-1;
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
}; */


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int leftshort[n];
        int rightshort[n];
        stack<int> s;
        for(int i=0;i<n;i++){            
            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                
                leftshort[i] = -1;
            }
            else{
                leftshort[i] = s.top();                
            }
            s.push(i);
        }
        while(!s.empty()){
                s.pop();
            }
        for(int i=n-1;i>=0;i--){            
            while(!s.empty() && heights[s.top()] >= heights[i]){
                s.pop();
            }
            if(s.empty()){
                
                rightshort[i] = n;
            }
            else{
                rightshort[i] = s.top();                
            }
            s.push(i);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,heights[i] * (rightshort[i] - leftshort[i] - 1));
        }
        return ans;
        
    }
};