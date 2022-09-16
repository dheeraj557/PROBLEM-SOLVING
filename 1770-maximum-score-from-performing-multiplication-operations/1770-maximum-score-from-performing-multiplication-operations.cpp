typedef long long ll;

class Solution {
public:
    int maximumScore(vector<int>& Nums, vector<int>& Mul) {
        int N = Nums.size(), M = Mul.size();
        ll Ans = -1e12;
        vector<vector<ll> > Dp(M + 1, vector<ll>(M + 1, -1e12));
        Dp[0][0] = 0;
        for (int i = 0; i < M; i++) 
        {
            int Left = 0, Right = i;
            while (Right >= 0) 
            {
                Dp[Left + 1][Right] = max(Mul[i] * Nums[Left] + Dp[Left][Right], Dp[Left + 1][Right]);
                Dp[Left][Right + 1] = max(Mul[i] * Nums[N - Right - 1] + Dp[Left][Right], Dp[Left][Right + 1]);     
                if (i == M - 1) 
                    Ans = max({Dp[Left + 1][Right], Dp[Left][Right + 1], Ans});       
                Left++;
                Right--;
            }
        }      
        return Ans;
    }
};