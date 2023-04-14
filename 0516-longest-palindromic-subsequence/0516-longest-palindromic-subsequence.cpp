class Solution {
public:
    int longestPalindromeSubseq(string str1) {
        string str2=str1;
        reverse(str2.begin(), str2.end());
        int n=str1.length();
	    int dp[n+1][n+1];
	    for(int i=0; i<=n; i++)
	    {
	        for(int j=0; j<=n; j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	               
	            else if(str1[i-1]==str2[j-1])
	                dp[i][j]=1+dp[i-1][j-1];
	               
	            else
	                dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
	               
	        }
	    }
	    return dp[n][n];
    }
};