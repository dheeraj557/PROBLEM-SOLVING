class Solution {
public:
    int find_factor(int n)
    {
        int ans=0,cnt=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                ans+=i;
                ans+=n/i;
                if(i==n/i)
                    cnt+=1;
                else
                cnt+=2;
                
            }
        }
        if(cnt==4)
            return ans;
        else
            return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           ans=ans+find_factor(nums[i]);  
        }
        return ans;
    }
};