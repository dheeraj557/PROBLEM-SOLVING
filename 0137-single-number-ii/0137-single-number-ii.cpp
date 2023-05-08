class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int ans = 0;
        for(int i = 0; i<32; i++)
        {
            int x = 0;
            for(int num : nums)
                if(num&(1<<i)) 
                    x+=1;
            if(x%3==1) 
                ans += (1<<i);
        }
        return ans;
    }
};