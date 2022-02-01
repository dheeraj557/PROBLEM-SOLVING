class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int rightmax=prices[n-1];
        int maxprofit=0;
        for(int i=n-1;i>=0;i--){
            if((rightmax-prices[i])>maxprofit) maxprofit=rightmax-prices[i];
            if(rightmax<prices[i]) rightmax=prices[i];
        }
        return maxprofit;
    }
};