class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v;
        
        for(int i=0; i<n; i++)
        {
            vector<int> vec (n, 0);
            v.push_back(vec);
        }
        
        int top_row = 0, bottom_row = n-1, left_col = 0, right_col = n-1;
        int count = 1;
        while(top_row <= bottom_row && left_col <= right_col)
        {
            for(int j=left_col; j<=right_col; j++, count++)
                v[top_row][j] = count; 
            top_row++;
            for(int i=top_row; i<=bottom_row; i++, count++)
                v[i][right_col] = count;
            right_col--;
            for(int j=right_col; j>= left_col; j--, count++)
                v[bottom_row][j] = count;
            bottom_row--;
            for(int i=bottom_row; i>=top_row; i--, count++)
                v[i][left_col] = count;
            left_col++;
        }
       return v; 
    }
};