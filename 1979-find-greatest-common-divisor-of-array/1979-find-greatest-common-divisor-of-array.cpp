class Solution {
public:
    int gcd(int dividend,int divisor)
    {
        if((dividend%divisor)==0)
            return divisor;
        return gcd(divisor,dividend%divisor);
    }
    int findGCD(vector<int>& nums) {
        int smallest=INT_MAX,largest=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>largest)
                largest=nums[i];
            if(nums[i]<smallest)
                smallest=nums[i];
        }
        if(smallest==largest)
            return smallest;
        int res=gcd(largest,smallest);
        return res;
    }
};