class Solution {
public:
    void gameOfLife(vector<vector<int>> &board)
{
    int row = board.size();
    int col = board[0].size();
    vector<vector<int>> to_change;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j){
            int count_1 = 0;
            if ((i - 1) >= 0)
                for (int a = (j - 1); a <= (j + 1); ++a)
                    if (a >= 0 and a < col and (board[i - 1][a] == 1))
                        ++count_1;
            for (int b = (j - 1); b <= (j + 1); b += 2)
                if (b >= 0 and b < col and (board[i][b] == 1))
                    ++count_1;
            if ((i + 1) < row)
                for (int c = (j - 1); c <= (j + 1); ++c)
                    if (c >= 0 and c < col and (board[i + 1][c] == 1))
                        ++count_1;
            if (board[i][j] == 0 and count_1 == 3)
                to_change.push_back({i, j});
            else if (board[i][j] == 1 and (count_1 < 2 or count_1 > 3))
                to_change.push_back({i, j});
        }
    for (auto a : to_change)
    {
        if (board[a[0]][a[1]])
            board[a[0]][a[1]] = 0;

        else
            board[a[0]][a[1]] = 1;
    }
}
};