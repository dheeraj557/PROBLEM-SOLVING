class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        vector<set<char>> row(n), col(n), block(n);
        
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(board[i][j] == '.') continue;
                if(row[i].find(board[i][j]) != row[i].end() || 
                   col[j].find(board[i][j]) != col[j].end() ||
                   block[i / 3 * 3 + j / 3].find(board[i][j]) != block[i/3*3+j/3].end())                       {
                    return false;
                }
                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                block[i / 3 * 3 + j / 3].insert(board[i][j]);
            }
        }
        return true;
    }
};