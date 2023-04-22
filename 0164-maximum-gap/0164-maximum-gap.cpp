class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        priority_queue<int,vector<int>>pq;
        for(int i:nums)
            pq.push(i);
        int diff=INT_MIN;
        int t1=pq.top(),t2=0;
        pq.pop();
        while(pq.size()!=0)
        {
            t2=t1;
            t1=pq.top();
            diff=max(t2-t1,diff);
            pq.pop();
        }
        return diff;
    }
};