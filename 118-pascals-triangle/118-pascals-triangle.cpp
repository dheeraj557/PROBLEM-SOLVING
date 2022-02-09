class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int> v={0,1,0};
        while(numRows--){
            vector<int> temp;
            int s=v.size();
            for(int i=1;i<s-1;i++){
                temp.push_back(v[i]);
            }
            ans.push_back(temp);
            v[0]=0;
            int x=v[0];
            for(int i=1;i<s;i++){
                int x1=v[i];
                v[i]=v[i]+x;
                x=x1;
            }
            v.push_back(0);
        }
        return ans;
    }
};