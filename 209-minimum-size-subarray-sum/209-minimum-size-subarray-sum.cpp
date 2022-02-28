class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
    int n = nums.size();
    int i = 0,j = 0,sum = 0,c = INT_MAX;
    while(j<n){
        sum+=nums[j];
        if(sum<t) j++;
        else if(sum>=t){
            while(sum>=t){
                c = min(c,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
    }
    return c==INT_MAX?0:c;
}
};