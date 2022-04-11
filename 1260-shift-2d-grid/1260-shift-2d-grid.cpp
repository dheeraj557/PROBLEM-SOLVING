class Solution {
public:
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
int m=grid.size();
int n=grid[0].size();
    for(auto l=0;l<k;l++)
    {
    auto temp=grid[0][0];
    auto temp2=grid[0][0];
    for(auto i=0;i<m;i++)
    {
        for(auto j=0;j<n;j++)
        {
            if((j<n-1) && (i<m-1))
            {
                temp2=grid[i][j+1];
                grid[i][j+1]=temp;
                temp=temp2;
            }
            else if((j==n-1) && (i<m-1))
            {    
                temp2=grid[i+1][0];
                grid[i+1][0]=temp;
                temp=temp2;
            }
            else if((j<n-1) && (i==m-1))
            {        
                temp2=grid[i][j+1];
                grid[i][j+1]=temp;
                temp=temp2;   
            }
        }
    }
    grid[0][0]=temp;
    }
    return grid;
    
}
};