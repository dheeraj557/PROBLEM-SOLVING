class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n = triangle.size();
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<triangle[i].size(); j++)
            {
                int low = triangle[i+1][j];
                if(j+1<triangle[i+1].size())
                {
                    low = min(low, triangle[i+1][j+1]);
                }
                triangle[i][j] += low;
            }
        }
        return triangle[0][0];
    }
};