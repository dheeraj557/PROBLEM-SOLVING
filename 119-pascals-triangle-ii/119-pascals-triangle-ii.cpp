class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back({1});
        for(int i=1;i<=rowIndex;i++){
            vector<int> t;
            t.push_back(1);
            for(int j=1;j<i;j++)
                t.push_back( ans[j]+ans[j-1] );
            t.push_back(1);
            ans=t;
        }
        return ans;
    }
};