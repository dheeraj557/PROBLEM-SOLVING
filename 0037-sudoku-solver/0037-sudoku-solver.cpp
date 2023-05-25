class Solution {
public:
    bool isSafe(vector<vector<char>>& mat,int i,int j,int no,int n)
    {
        for(int k=0;k<n;k++)
        {
            if((mat[k][j]-'0')==no  || (mat[i][k]-'0')==no)
                return false;
        }
        int sx=(i/3)*3;
        int sy=(j/3)*3;
        for(int x=sx;x<sx+3;x++){
            for(int y=sy;y<sy+3;y++)
            {
                if((mat[x][y]-'0')==no)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& mat,int i,int j,int n){
        if(i==n)
            return true;
        if(j==n)
            return solve(mat,i+1,0,n);
        if(mat[i][j]!='.')
            return solve(mat,i,j+1,n);
        for(int no=1;no<=n;no++)
        {
            if(isSafe(mat,i,j,no,n)){
                mat[i][j]=no+'0';
                bool solveSubProblem=solve(mat,i,j+1,n);
                if(solveSubProblem==true)
                    return true;
            }
        }
        mat[i][j]='.';
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0,9);
    }
};