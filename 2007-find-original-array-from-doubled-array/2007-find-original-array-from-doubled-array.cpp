class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int> mp;
        vector<int> original;
        for(auto &it:changed) mp[it]++;
        sort(changed.begin(),changed.end());
        for(auto &ele:changed){
            if(mp[ele]>0){
                mp[ele]--;
                if(mp[ele*2]>0){
                    original.push_back(ele);
                    mp[ele*2]--;
                }
                else return {};
            }
        }
        return original;
    }
};