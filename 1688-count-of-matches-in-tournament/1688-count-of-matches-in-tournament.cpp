class Solution {
public:
    int helper(int n)
    {
        if(n%2!=0)
            return n/2+1;
        return n/2;
    }
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1)
        {
            sum+=n/2;
            n=helper(n);
        }
        return sum;
    }
};