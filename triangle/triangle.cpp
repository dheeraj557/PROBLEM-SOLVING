class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n = triangle.size();
        
        //start iterating from last-1 th row
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<triangle[i].size(); j++)
            {
                int low = triangle[i+1][j];
                
                //j+1 is for the i+1th row, hence j < size of i+1th row
                if(j+1<triangle[i+1].size())
                {
                    low = min(low, triangle[i+1][j+1]);
                }
                
                //add the min value from the next row to the current element
                triangle[i][j] += low;
            }
        }
        
        //triangle[0][0] is already the minimum sum of the below row elements
        return triangle[0][0];
    }
};