class Solution 
{
    public:
        int arrangeCoins(int n) 
        {
            long lo = 0, hi = n;
            while (lo <= hi) 
            {
                long mid = lo + (hi - lo) / 2;
                if ((mid + 1) * mid / 2 > n)
                {
                    hi = mid - 1;
                } 
                else 
                {
                    lo = mid + 1;
                }
            }
        return lo - 1;
        }
};