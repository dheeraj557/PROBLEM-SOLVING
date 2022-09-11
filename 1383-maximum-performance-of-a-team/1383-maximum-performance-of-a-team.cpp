class Solution {
public:
    int mod=1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({efficiency[i],speed[i]});
        }
        sort(arr.begin(),arr.end(),[&](pair<int,int>a,pair<int,int>b){
             return a.first>b.first;
        }); 
        long long ans=-1e17,sum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            int mineff=arr[i].first,newSpeed=arr[i].second;
            pq.push(newSpeed);
            sum+=newSpeed;
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            long long currAns=(sum*mineff);
            ans=max(ans,currAns);
        }
        return ans%mod;
    }
};