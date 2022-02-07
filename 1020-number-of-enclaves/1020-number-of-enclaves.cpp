class Solution {
public:
    
    //dfs call
    void dfs(vector<vector<int>>&grid,int i,int j,int r, int c)
    {
        if(i<0||j<0||i>=r||j>=c||grid[i][j]==0) return;
        
        grid[i][j]=0;
        dfs(grid,i+1,j,r,c);
        dfs(grid,i-1,j,r,c);
        dfs(grid,i,j+1,r,c);
        dfs(grid,i,j-1,r,c);
    }

    
    int numEnclaves(vector<vector<int>>& grid)
    {
        int ans=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1 && (i==0||i==r-1||j==0||j==c-1))
                {
                    dfs(grid,i,j,r,c);
                }
            }
        }
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                    ans++;
            }
        }
    return ans;
    }
};