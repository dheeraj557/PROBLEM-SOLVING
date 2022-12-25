class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < queries.size(); i++)
        {
            long long int sum = 0; int ans = 0;
            for (int k = 0; k < nums.size(); k++) 
            {
                sum += nums[k];
                if (sum <= queries[i]) 
                {
                    ans = max(ans, k + 1);
                }
                else 
                {
                    break;
                }
            }
            res.push_back(ans);
        }
        return res;
    }

};