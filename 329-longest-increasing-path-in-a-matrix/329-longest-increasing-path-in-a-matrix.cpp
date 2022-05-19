class Solution {
public:
    int dp[201][201];
    int solve(int i,int j,int n,int m,vector<vector<int>>& matrix,int prev)
    {
        if(i<0 || i>=n || j<0 || j>=m || prev>=matrix[i][j])
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int left=solve(i,j-1,n,m,matrix,matrix[i][j]);
        int right=solve(i,j+1,n,m,matrix,matrix[i][j]);
        int up=solve(i-1,j,n,m,matrix,matrix[i][j]);
        int down=solve(i+1,j,n,m,matrix,matrix[i][j]);
        return dp[i][j]=1+max(left,max(right,max(up,down)));
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i,j;
        memset(dp,-1,sizeof(dp));
        int ans=INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ans=max(ans,solve(i,j,n,m,matrix,-1));
            }
        }
        return ans;
    }
};