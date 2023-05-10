class Solution {
public:
    int trailZero(int n)
    { 
        int c=0;
        while(n){
            c+=n/5;
            n=n/5;
        }
        return c;
    }
    int preimageSizeFZF(int k)
    {
        long long int l,h,mid;
        
        l=0,h=1000000000;
        if(k==l or k==h)
            return 5;
        while(l<=h)
        { 
        mid=l+(h-l)/2;
        int c=trailZero(mid);
            if(c==k)
                return 5;
            else if(c>k)
                h=mid-1;
            else 
                l=mid+1;
        }
        return 0;
    }
};