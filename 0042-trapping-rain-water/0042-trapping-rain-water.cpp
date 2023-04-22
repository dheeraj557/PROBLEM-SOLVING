class Solution {
public:
    int trap(vector<int>& height) {
        int total=0;
        int n=height.size();
        vector<int>left(n,0),right(n,0);
        left[0]=height[0];
        right[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);
            right[n-i-1]=max(right[n-i],height[n-i-1]);
        }
        for(int i=0;i<n;i++)
        {
            int min1=min(left[i],right[i]);
            total+=min1-height[i];
        }
        return total;
    }
};