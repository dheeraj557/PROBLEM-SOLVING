class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {  
        vector<vector<int>> res;
        vector<int> curr_vec;
        helper(nums, 0, curr_vec, res);
        return res;
    }
    void helper(vector<int> &nums, int curr, vector<int>& curr_vec, vector<vector<int>>& res){
        if(curr == nums.size()){
            res.push_back(curr_vec);
            return;
        }
        helper(nums, curr + 1, curr_vec, res);
        curr_vec.push_back(nums[curr]);
        helper(nums, curr + 1, curr_vec, res);
        curr_vec.pop_back();
    }
};