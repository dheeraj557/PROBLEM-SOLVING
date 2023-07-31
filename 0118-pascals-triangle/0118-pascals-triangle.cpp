class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0)
            return {};
        
        vector<vector<int>> res;
        res.push_back({1}); // First row: 1
        
        for (int i = 1; i < numRows; i++) {
            vector<int> temp(i + 1, 1); // Start with i+1 elements, all initialized to 1
            
            for (int j = 1; j < i; j++) {
                temp[j] = res[i - 1][j - 1] + res[i - 1][j]; // Compute middle elements of the row
            }
            
            res.push_back(temp); // Add the generated row to the result
        }
        
        return res;
    }
};