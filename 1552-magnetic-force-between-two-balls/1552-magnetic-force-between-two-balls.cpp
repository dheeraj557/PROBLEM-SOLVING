class Solution {
public:
    bool ifpossible(int pos,vector<int>& position,int m)
    {
        int count=1;
        int lastballplaced=position[0];
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-lastballplaced>=pos)
            {
                count++;
                lastballplaced=position[i];
            }
            if(count==m)
                    return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=0,high=position[n-1];
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(ifpossible(mid,position,m))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};