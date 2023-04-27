class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size(),count=1;
        vector<int>lmax(n+1,INT_MIN),rmin(n+1,INT_MAX);
        lmax[0]=arr[0],rmin[n]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],arr[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            rmin[i]=min(rmin[i+1],arr[i]);
        }
        for(int i=0;i<=n;i++)
        {
            cout<<lmax[i]<<" "<<rmin[i]<<endl;
        }
        for(int i=0;i<n-1;i++)
        {
            if(lmax[i]>rmin[i+1])
                continue;
            else if(lmax[i]<=rmin[i+1])
                count++;
        }
        return count;
    }
};