class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>s;
        vector<int>ans;
        for(int i=0;i<mat.size();i++)
        {
            int count =0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    count++;
                else
                    break;
            }
            s.insert(make_pair(count,i));
        }
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        return ans;
    }
};