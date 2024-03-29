class MyCalendarThree {
public:
    int maxCount=0;
    map<int,int>mp;
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            count+=it->second;
            maxCount=max(count,maxCount);
        }
        return maxCount;
    }
};