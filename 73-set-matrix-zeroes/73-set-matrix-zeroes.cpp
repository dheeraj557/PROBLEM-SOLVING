class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_set<int> row;
        unordered_set<int> column;
        
        for (int i{};i<m;i++){
            for (int j{};j<n;j++){
                if (matrix[i][j]==0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for (int i{};i<m;i++){
            for (int j{};j<n;j++){
                if (row.find(i)!=row.end()||column.find(j)!=column.end())
                    matrix[i][j]=0;
            }
        }
    }
};