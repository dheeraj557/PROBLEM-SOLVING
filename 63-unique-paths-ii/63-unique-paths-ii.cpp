class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
       if(obstacleGrid[0][0]==1)
           return 0;
        obstacleGrid[0][0]=1;
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 and j==0){
                    ans[0][0]=1;
                     continue;
                }
                else if(i==0){
                    if(obstacleGrid[i][j]==1)
                    {
                        ans[i][j]=0;
                    }
                    else
                    {
                        ans[i][j]=ans[i][j-1];
                    }
                    continue;
                }
                else if(j==0)
                {
                    if(obstacleGrid[i][j]==1)
                    {
                        ans[i][j]=0;
                    }
                    else
                    {
                        ans[i][j]=ans[i-1][j];
                    }
                    continue;
                }
                if(obstacleGrid[i][j]==1){
                     ans[i][j]=0;
                }
                else
                {
                    ans[i][j]=ans[i-1][j]+ans[i][j-1];
                }
            }
        }
        return ans[m-1][n-1];
    }
};