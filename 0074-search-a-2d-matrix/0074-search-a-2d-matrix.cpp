class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int li;
        for(int i=0;i<matrix.size();i++)
        {
            li = matrix[i].size() - 1;
            if(matrix[i][li] >= target)
            {
                int low=0,high=matrix[0].size()-1,mid=0;
                while(low<=high)
                {
                    mid=low+(high-low)/2;
                    if(matrix[i][mid]==target)
                        return true;
                    else if(matrix[i][mid]>target)
                        high=mid-1;
                    else
                        low=mid+1;
                }
                return false;
            }
        }
        return false;
    }
};