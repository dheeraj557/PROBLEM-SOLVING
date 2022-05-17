class Solution
{
    public:
    bool isPerfectSquare(int num) 
    {
        int lo = 0, hi = num;
        while (lo <= hi) 
        {
            int mid = lo + (hi - lo) / 2;
            long long s = (long long)mid * mid;
            if (s == num) 
            {
                return true;
            } 
            else if (s > num) 
            {
                hi = mid - 1;
            } 
            else    
            {
                lo = mid + 1;
            }
        }
        return (long long)hi * hi == num;
    }
  };