class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        stack<pair<int, int>> st;
        int mini = INT_MAX;
        for(int k=0; k<nums.size(); k++)
        {
            if(!st.empty())
                mini = min(mini, st.top().first);
            while(!st.empty() && nums[k]>st.top().first) 
                st.pop();
            if(!st.empty())
            {
                if((st.top().second < nums[k]) && (nums[k] < st.top().first)) 
                    return true;
            }
            st.push({nums[k], mini});
        }
        return false;
    }
};