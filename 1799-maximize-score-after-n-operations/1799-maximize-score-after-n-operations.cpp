class Solution {
public:
    int gcd(int num1,int num2) {
        if(num2 == 0) 
            return num1;
        return gcd(num2,num1 % num2);
    }
    int helper(vector<int>& nums,int mask,int op,unordered_map<int,int> &mp) {
        if(mp.find(mask) != mp.end())
            return mp[mask];
        mp[mask] = 0;
        for(int i = 0;i < nums.size();i++)
        {
            for(int j = i + 1;j < nums.size();j++)
            {
                if(((1 << i) & mask )|| (1 << j) & mask)
                    continue;
                int newMask = mask | (1 << i) | (1 << j);
                int score = op * gcd(nums[i],nums[j]);
                mp[mask] = max(mp[mask],score + helper(nums,newMask,op + 1,mp));
            }
        }
        return mp[mask];
    }
    int maxScore(vector<int>& nums) {
        unordered_map<int,int> mp;
        return helper(nums,0,1,mp);
    }
};