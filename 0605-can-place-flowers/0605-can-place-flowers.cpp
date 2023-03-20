class Solution {
public:
    bool canPlaceFlowers(vector<int>& fbd, int n) {
        for(int i = 0; i < fbd.size(); ++i)
        {
            if(n == 0)
                break;
            if((i == 0 || fbd[i-1] == 0) && fbd[i] != 1)
            {
                if(i == fbd.size()-1 || fbd[i+1] == 0)
                { 
                    n--;
                    fbd[i] = 1;
                }
            }
        }
        return n==0;
    }
};