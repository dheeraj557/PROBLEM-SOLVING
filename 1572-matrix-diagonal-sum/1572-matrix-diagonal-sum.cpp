class Solution 
{
public:
    int diagonalSum(vector<vector<int>>& mat)
    {
        int sum = 0;
        int n = mat.size();
        for(int i = 0;i<n;i++)
        {
            sum +=(mat[i][n-i-1]+mat[i][i]);    
        }
        if(n%2!=0) 
            sum-=mat[n/2][n/2];
        return sum;
    }
};