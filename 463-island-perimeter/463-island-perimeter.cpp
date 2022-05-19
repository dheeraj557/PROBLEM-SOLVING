class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int peri =0;
        for(int i=0;i<m;++i){
            for(int j=0; j<n;++j)
            {
                if(grid[i][j] == 0) 
                    continue;    
                peri+=4;
                if(i>0) 
                    peri-=grid[i-1][j];
                if(j>0) 
                    peri-=grid[i][j-1];
                if(i<m-1) 
                    peri-=grid[i+1][j];
                if(j<n-1) 
                    peri-=grid[i][j+1];
            }
        }
        return peri;
    }
};