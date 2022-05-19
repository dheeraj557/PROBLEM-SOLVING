class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int new_n) {
		int mpPos=0;
        vector<vector<int>> ans(r, vector<int> (new_n, 0));
        if(mat.size()==r) return mat; //shape not changed
        if(r*new_n!=mat.size()*mat[0].size()) return mat;
        for(int i=0;i<mat.size();i++){//new height
            for(int j=0;j<mat[0].size();j++){//new length
                ans[mpPos/new_n][mpPos%new_n] = mat[i][j];
                mpPos++;
            }
        }
        return ans;
    }
};