class Solution {
public:
    int lcs(string str1, string str2)
	{
	    int n=str1.length(), m=str2.length();
	    int dp[n+1][m+1];
	    for(int i=0; i<=n; i++)
	    {
	        for(int j=0; j<=m; j++)
	        {
	            if(i==0 || j==0)
	                dp[i][j]=0;
	               
	            else if(str1[i-1]==str2[j-1])
	                dp[i][j]=1+dp[i-1][j-1];
	               
	            else
	                dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
	               
	        }
	    }
	    return dp[n][m];
	}
    int longestPalindromeSubseq(string A) {
        string B=A;
        reverse(B.begin(), B.end());
        return lcs(A, B);
    }
};