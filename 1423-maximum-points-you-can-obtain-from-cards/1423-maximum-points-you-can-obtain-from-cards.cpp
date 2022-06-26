class Solution {
public:
    int maxScore(vector<int>& c, int k) 
    {
        int mini=INT_MAX;
        int n=c.size();
        int curr=0;
         int r=n-k;
        for(int i=0;i<r;++i)
        {
            curr+=c[i];
        }
        mini=curr;
        for(int i=1;i+r<=n;++i){
            curr+=c[i+r-1];
            curr-=c[i-1];
            mini=min(mini,curr);
            
        }
        int tot=accumulate(c.begin(),c.end(),0);
        return tot-mini;
    }
};