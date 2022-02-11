class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> presum(m+1, vector<int> (n+1, 0));
        for(int i=1; i<=m; ++i)
            for(int j=1; j<=n; ++j)
                presum[i][j] = mat[i-1][j-1] + presum[i][j-1] + presum[i-1][j] - presum[i-1][j-1];
        
        vector<vector<int>> ans(m, vector<int> (n, 0));
        for(int i=0; i<m; ++i)
            for(int j=0; j<n; ++j){
                int r1 = max(0, i-k), r2 = min(m, i+k+1);
                int c1 = max(0, j-k), c2 = min(n, j+k+1);
                ans[i][j] = presum[r2][c2] - presum[r2][c1] - presum[r1][c2] + presum[r1][c1];
            }
        return ans;
    }
};