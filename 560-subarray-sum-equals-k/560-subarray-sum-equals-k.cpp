class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mpp;
    int sum=0;
    int maxi=0;
    for(int i=0; i< nums.size(); i++){
        sum += nums[i];
        if(sum == k)    
            maxi++;
        if(mpp.find(sum - k) != mpp.end())    
            maxi += mpp[sum - k];
        mpp[sum]++;
    }
    return maxi;
    }
};