class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int xor1=0;
        int n=arr.size(),m=queries.size();
        vector<int>temp(n),res(m);
        for(int i=0;i<n;i++)
        {
            temp[i]=xor1^arr[i];
            xor1^=arr[i];
        }
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0],r=queries[i][1];
            int sum=arr[l]^temp[l]^temp[r];
            res[i]=sum;
        }
        return res;
    }
};