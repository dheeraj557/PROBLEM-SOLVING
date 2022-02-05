class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int l=values.size(),ans=0;
        int i=0,arr[l];
        for(i=0;i<l;i++)
        {
            if(i==0)
            {
                arr[i]=values[i];
            }
            else
            {
                ans=max(ans,arr[i-1]+values[i]-1);
                arr[i]=max(arr[i-1]-1,values[i]);
            }
        }
        return ans;
    }
};