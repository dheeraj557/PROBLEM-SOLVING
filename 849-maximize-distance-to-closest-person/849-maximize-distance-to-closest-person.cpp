class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int nearest=0;
        int farthest=0;
        int n=seats.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(seats[i]==1)
            {
                nearest=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i]==1)
            {
                farthest=i;
                break;
            }
        }
        vector<int>left(n,0);
        vector<int>right(n,0);
        vector<int>result(n,0);
        for(int i=0;i<n;i++)
        {
            if(seats[i]==1){
                nearest=i;
                left[i]=0;
            }
            else
            {
                left[i]=abs(i-nearest);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i]==1){
                farthest=i;
                right[i]=0;
            }
            else
            {
                right[i]=abs(farthest-i);
            }
        }
        for(int i=0;i<n;i++)
        {
            result[i]=min(left[i],right[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(result[i]>res)
                res=result[i];
        }
        return res;
    }
};