class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<int, int>> list;
        for (int i = 0; i < nums.size(); ++i) {
            list.push_back({nums[i], i});
        }
        sort(list.begin(), list.end());
        for (int i = 0; i <list.size(); ++i) {
            for(int j = i+1; j <list.size(); ++j) {
                if ((long)list[j].first -list[i].first > (long)t) {
                    break;
                }
                if (abs(list[i].second - list[j].second) <= k) {
                    return true;
                }
                
            }
        }
        return false;
    }
};