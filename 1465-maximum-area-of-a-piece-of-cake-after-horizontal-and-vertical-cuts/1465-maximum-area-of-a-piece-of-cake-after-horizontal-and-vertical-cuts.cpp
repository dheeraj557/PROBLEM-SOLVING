class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int n=horizontalCuts.size(),m=verticalCuts.size();
        int maxHeight=max(horizontalCuts[0]-0,h-horizontalCuts[n-1]);
        for(int i=1;i<n;i++)
        {
            int horizontalWidth=horizontalCuts[i]-horizontalCuts[i-1];
            maxHeight=max(maxHeight,horizontalWidth);
        }
        int maxWidth=max(verticalCuts[0]-0,w-verticalCuts[m-1]);
        for(int i=1;i<m;i++)
        {
            int verticalWidth=verticalCuts[i]-verticalCuts[i-1];
            maxWidth=max(maxWidth,verticalWidth);
        }
        long ans=1L*maxHeight*maxWidth;
        return (int)(ans%1000000007);
    }
};