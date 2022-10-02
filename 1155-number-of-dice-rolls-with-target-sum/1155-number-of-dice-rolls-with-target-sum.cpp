class Solution 
{
public:

 long long solveMem(int dice, int faces, int target,vector<vector<long long>>&dp)
 {
     int mod = 1e9 + 7;
        if(target < 0)
            return 0;
    if(dice == 0 && target != 0)
        return 0;
    if(target == 0 && dice != 0)
        return 0;
    if(dice == 0 && target == 0)
        return 1;
     if(dp[dice][target] != -1)
         return dp[dice][target];
    long long ans=0;
    for(int i=1;i<=faces;i++)
    {
        ans += solveMem(dice-1,faces,target-i,dp);
    }
     ans = ans%mod;    
    return dp[dice][target]=ans;
}
int numRollsToTarget(int n, int k, int target)
{
    int mod = 1e9 + 7;
    vector<vector<long long >> dp(n+1,vector<long long>(target+1,-1));
    return solveMem(n,k,target,dp)%mod;
}
};