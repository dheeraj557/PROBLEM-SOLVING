class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        findCmb(candidates, curr, 0, target);
        return ans;
    }
    void findCmb(vector<int>& candidates, vector<int>& curr, int i, int target){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        for(int idx = i; idx < candidates.size(); idx++){
            if(target - candidates[idx] < 0)
                break;
            if(idx > i && candidates[idx] == candidates[idx - 1])
                continue;
            curr.push_back(candidates[idx]);
            findCmb(candidates, curr, idx + 1, target - candidates[idx]);
            curr.pop_back();
        }  
    }
};