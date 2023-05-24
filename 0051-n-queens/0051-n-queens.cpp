class Solution {
public:
    vector<vector<string>>ans;
    bool isValid(int row,int column,vector<string>&board)
    {
        int i=row,j=column;
        while(i>=0)
        {
            if(board[i][j]=='Q')
                return false;
            i--;
        }
        i=row;
        while(i>=0 and j>=0)
        {
            if(board[i][j]=='Q')
                return false;
            i--;
            j--;
        }
        i=row;
        j=column;
        while(i>=0 and j<board.size())
        {
            if(board[i][j]=='Q')
                return false;
            i--;
            j++;
        }
        return true;
    }
    void helper(int row,vector<string>board)
    {
        if(row>=board.size())
        {
            ans.push_back(board);
            return;
        }
        for(int col=0;col<board.size();col++)
        {
            if(isValid(row,col,board)==true)
            {
                board[row][col]='Q';
                helper(row+1,board);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        helper(0,board);
        return ans;
    }
};