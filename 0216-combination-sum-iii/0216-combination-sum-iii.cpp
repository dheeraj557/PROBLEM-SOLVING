class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>&aux,int k,int n,int sum,int start)
    {
        if(sum==n and aux.size()==k)
        {
            ans.push_back(aux);
            return;
        }
        if(aux.size()==k)
        {
            return;
        }
        for(int i=start;i<10;i++)
        {
            aux.push_back(i);
            helper(aux,k,n,sum+i,i+1);
            aux.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>aux;
        helper(aux,k,n,0,1);
        return ans;
    }
};