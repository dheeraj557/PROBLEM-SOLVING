#define ll long long
class Solution {
public:
    int mod=1e9+7;
    ll gcd(ll a,ll b)
    {
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    ll lcm(ll a,ll b)
    {
        return (a*b)/gcd(a,b);
    }
    int nthMagicalNumber(int n, int a, int b) {
        ll low=1,high=1e17,mid=0,target;
        ll lcmab=lcm(a,b);
        while(low < high)
        {
            mid=low+(high-low)/2;
            target=(mid/a)+(mid/b)-(mid/lcmab);
            if(target<n)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
            
        }
        return high%mod;
    }
};