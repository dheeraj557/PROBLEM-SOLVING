class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        bool flag = true;
        for(int i = 0; i < nums.size(); i++) 
        {
            flag = true;
            int temp = nums[i];
            nums[i] = (i == 0)?INT_MIN:nums[i-1];
            for(int j = 1; j < nums.size(); j++) 
            {
                if(nums[j-1] > nums[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                return true;
            }
            nums[i] = temp;
        }
        return false;
    }
};