using ll = long long;

class Solution {
public:
    string smallestGoodBase(string n) {
        ll num = stoll(n);
        for(int i=61; i>=0; i--)
        {
            ll l=2, r=num-1;
            while(l<=r)
            {
                ll res=1, pwr=1, j=0, mid=(l+r)/2;
				while(j<i)
                {
                    if(pwr > (num-res)/mid) // same as -> (res + pwr*mid) > num
                        break;
                    pwr *= mid;
                    res += pwr;

                    j++;
                }

                if(j<i)
                    r = mid-1;
                else if(res<num)
                    l = mid+1;
                else
                    return to_string(mid);
                
            }
        }
        
        return to_string(num-1);
        
    }
};