class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest=0;
        vector<bool>result;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>greatest)
                greatest=candies[i];
            
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=greatest)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};