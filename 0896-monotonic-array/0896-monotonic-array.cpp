class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size()<=2) return true;
        bool inc= 1;
        int i=0;
        while (i+1<nums.size() && nums[i]==nums[i+1])++i;
        if (i== nums.size()-1)return true;
        if (nums[i]>nums[i+1])inc=0;
        for (;i+1<nums.size(); i++){
            if (inc==1){
                if (nums[i]>nums[i+1])return false;
            }
            else{
                if (nums[i]<nums[i+1])return false;
            }
        }
        return true;
    }
};