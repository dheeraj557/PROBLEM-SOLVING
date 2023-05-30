class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        int res=0;
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,max4=INT_MIN;
        int min1=INT_MAX,min2=INT_MAX,min3=INT_MAX,min4=INT_MAX;
        int n=arr1.size();
        for(int i=0;i<n;i++)
        {
            max1=max(max1,i+arr1[i]+arr2[i]);
            max2=max(max2,i+arr1[i]-arr2[i]);
            max3=max(max3,i-arr1[i]+arr2[i]);
            max4=max(max4,i-arr1[i]-arr2[i]);
            min1=min(min1,i+arr1[i]+arr2[i]);
            min2=min(min2,i+arr1[i]-arr2[i]);
            min3=min(min3,i-arr1[i]+arr2[i]);
            min4=min(min4,i-arr1[i]-arr2[i]);
            res=max(max(max1-min1,max2-min2),max(max3-min3,max4-min4));
        }
        return res;
    }
};