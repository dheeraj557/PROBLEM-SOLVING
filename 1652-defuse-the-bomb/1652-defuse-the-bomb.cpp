class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n,0);
        if(k==0)
            return res;
        for(int i=0;i<n;i++) 
        {
            int count=0;
            if(k>0) 
            {
                for(int j = (i + 1) % n; count < k; j = (j + 1) % n) 
                {
                    res[i] += code[j];
                    count++;
                }
            } 
            else if(k<0)
            {
                for(int j = i - 1; count < abs(k); j--) 
                {
                    if(j == -1) 
                        j = n - 1;
                    res[i] += code[j];
                    count++;
                }
            }
        }
        return res;
    }
};