class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int i = 0;
        for(int j=1;j<nums.size();j++){
            if(nums[i] == nums[j]){
                count+=j-i;
            }
            else
            {
                i=j;
            }
        }
        return count;
    }
};