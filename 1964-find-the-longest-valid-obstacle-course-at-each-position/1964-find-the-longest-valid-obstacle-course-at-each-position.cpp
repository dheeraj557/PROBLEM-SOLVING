class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n = obstacles.size();
    vector<int> seq;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int idx = upper_bound(seq.begin(), seq.end(), obstacles[i]) - seq.begin();
        if (idx == seq.size()) {
            seq.push_back(obstacles[i]);
        } else {
            seq[idx] = obstacles[i];
        }
        ans[i] = idx+1;
    }

    return ans;
    }
};