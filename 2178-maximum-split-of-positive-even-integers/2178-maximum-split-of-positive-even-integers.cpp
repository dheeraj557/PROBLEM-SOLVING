class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>v;
        if(finalSum%2==1)
        {
            return v;
        }
        long long count = 2;
        while(count<=finalSum)
        {
            v.push_back(count);
            finalSum-=count;
            count+=2;
        }
        v[v.size()-1]+=finalSum;
        return v;
    }
};