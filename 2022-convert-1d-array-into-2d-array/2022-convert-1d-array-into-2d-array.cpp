class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) 
    {
        int k = nums.size();
        if(m * n != k) 
            return {};
        vector<vector<int>>ans(m,vector<int>(n));
        int row = 0 , col = 0;
        for(int i=0;i<k;i++)
        {
            if(col == n)
            {
                row++;
                col = 0;
            }
            ans[row][col++] = nums[i];
        }
        return ans;
    }
};