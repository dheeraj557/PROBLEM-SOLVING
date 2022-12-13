class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i=matrix.size()-2;i>=0;i--)
            for(int j=0;j<matrix.size();j++)
                if(j==0)
                    matrix[i][j]+=min(matrix[i+1][j],matrix[i+1][j+1]);
                else if(j==matrix[i].size()-1)
                    matrix[i][j]+=min(matrix[i+1][j-1],matrix[i+1][j]);
                else
                    matrix[i][j]+=min(min(matrix[i+1][j-1],matrix[i+1][j]),matrix[i+1][j+1]);
        return *min_element(matrix[0].begin(),matrix[0].end());
    }
};