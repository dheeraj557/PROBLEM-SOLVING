class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int n = colors.size();
        for (int i = 0; i + 1 < colors.size(); i++) {
            if (colors[i] == colors[i + 1]) {
                if (neededTime[i] > neededTime[i + 1]) {
                    ans += neededTime[i + 1]; //add smaller time
                    neededTime[i + 1] = neededTime[i]; //bubble;
                } 
                else ans += neededTime[i];
            }
        }
        
        return ans;
    }
};