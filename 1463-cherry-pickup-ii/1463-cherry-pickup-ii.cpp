class Solution {
public:
    int helper(vector<vector<int>>&grid,int a, int b, int c, int d,int &r, int &cl,int ***dp)
    {
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if(a>=r || c>=r || b>=cl || d>=cl || b<0 || d<0 )return 0;
        if(a==c && b==d)return 0;
        if(dp[a][b][d]!=-1)return dp[a][b][d];
        int ans1 = helper(grid, a+1,b-1,c+1,d-1,r,cl,dp) + grid[a][b] + grid[c][d] ;
        int ans2 = helper(grid, a+1,b-1,c+1,d,r,cl,dp) + grid[a][b] + grid[c][d];
        int ans3 = helper(grid, a+1,b-1,c+1,d+1,r,cl,dp) + grid[a][b] + grid[c][d];
        
        int ans4 = helper(grid, a+1,b,c+1,d-1,r,cl,dp) + grid[a][b] + grid[c][d];
        int ans5 = helper(grid, a+1,b,c+1,d,r,cl,dp) + grid[a][b] + grid[c][d];
        int ans6 = helper(grid, a+1,b,c+1,d+1,r,cl,dp) + grid[a][b] + grid[c][d];
        
        int ans7 = helper(grid, a+1,b+1,c+1,d-1,r,cl,dp) + grid[a][b] + grid[c][d];
        int ans8 = helper(grid, a+1,b+1,c+1,d,r,cl,dp) + grid[a][b] + grid[c][d];
        int ans9 = helper(grid, a+1,b+1,c+1,d+1,r,cl,dp) + grid[a][b] + grid[c][d];
        
        int ans =  max({ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9});
        dp[a][b][d] = ans;
        return ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        
        int r=grid.size(),c=grid[0].size();
        // creating dp array
        int ***dp = new int**[r+1];
        for(int i=0;i<r+1;i++)
        {
            dp[i]=new int*[c+1];
            for(int j=0;j<c+1;j++)
            {
                dp[i][j]=new int[c+1];
                for(int l=0;l<c+1;l++)dp[i][j][l]=-1;
                
            }
        }
        
        int ans = helper(grid,0,0,0,c-1,r,c,dp);
        // deleting dp array
        for(int i=0;i<r+1;i++)
        {
            for(int j=0;j<c+1;j++)
            {
                delete[] dp[i][j];
            }
            delete[] dp[i];
        }
        delete[] dp;
        return ans;
        
    }
};