class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int currl=intervals[0][0],currr=intervals[0][1];
        vector<vector<int>>v;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>currr)
            {
                v.push_back({currl,currr});
                currl=intervals[i][0];
            }
            currr=max(currr,intervals[i][1]);
        }
        v.push_back({currl,currr});
        return v;
    }
};