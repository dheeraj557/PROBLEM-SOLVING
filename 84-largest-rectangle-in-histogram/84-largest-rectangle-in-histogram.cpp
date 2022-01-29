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