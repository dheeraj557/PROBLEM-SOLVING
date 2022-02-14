class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int dp[n][n];
        int length = 0 , end = -1;
        for(int i = n-1; i >= 0; i--){
            for(int j = i; j < n; j++){
                if(i == j){
                    dp[i][j] = 1;
                }
                else if(s[i] == s[j]){
                    int ans = 2;
                    if(i < n-1 && j > i+1){
                        if(dp[i+1][j-1]){
                            ans += dp[i+1][j-1];
                        }
                        else{
                            ans = 0;
                        }
                    }
                    dp[i][j] = ans;
                }
                else{
                    dp[i][j] = 0;
                }
                if(length < dp[i][j]){
                    length = dp[i][j]; 
                    end = j;
                }
            }
        }
        return s.substr(end-length+1 , length);
    }
};