class Solution {
public:
    bool checkIfPangram(string str) \
    {
        int n = str.size();
        vector<int>count(26,0);
        for(int i = 0; i < n; i++)
        {
            int idx = str[i] - 'a';   
            count[idx]++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(count[i] == 0)
                return false;
        }      
        return true;
    }
};