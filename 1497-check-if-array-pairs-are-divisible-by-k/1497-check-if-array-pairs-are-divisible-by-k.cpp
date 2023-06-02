class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>rem(k);
        for(int i:arr)
        {
            int r=(i%k+k)%k;
            rem[r]++;
        }
        if(rem[0]%2!=0)
            return false;
        for(int i=1;i<=k/2 and i!=k-i ;i++)
        {
            if(rem[i]!=rem[k-i])
                return false;
        }
        return true;
    }
};