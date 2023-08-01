class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minvalue=prices[0];
        int maxp=0;
        for(int i=1;i<prices.size();i++)
        {
            minvalue=min(minvalue,prices[i]);
            maxp=max(maxp,prices[i]-minvalue);
        }
        return maxp;
    }
};