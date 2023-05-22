class Solution {
public:
    vector<int> topKFrequent(vector<int>&a, int k) {
        unordered_map<int,int> v;
        for(auto i:a) 
            v[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto i:v)
        {
            pq.push(make_pair(i.second,i.first));
        }
        vector<int> ans;
        int m=pq.size();
        while(pq.size()>m-k)
        {
            ans.push_back(pq.top().second); 
            pq.pop();
        }
        return ans;
    }
};