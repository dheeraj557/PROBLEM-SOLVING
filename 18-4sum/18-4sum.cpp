class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> four;
        if (nums.size() < 4) 
            return four;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; ++i) 
        {
            if (i == 0 || nums[i] != nums[i-1]) 
            {
                int target1 = target - nums[i];
                for(int j = i+1; j < nums.size() - 2; ++j) 
                {
                    if (j == i+1 || nums[j] != nums[j-1])
                    {
                        int start = j + 1;
                        int end = nums.size() - 1;
                        int target2 = target1 - nums[j];
                        while (start < end)
                        {
                            int newTarget = nums[start] + nums[end];
                            if (newTarget == target2) 
                            {
                                four.push_back({nums[i], nums[j], nums[start], nums[end]});
                                while (start < end && nums[start] == nums[start + 1]) 
                                    start++;
                                while (start < end && nums[end] == nums[end - 1]) 
                                    end--;
                                start++;
                                end--;
                            } 
                            else if (newTarget < target2) 
                                start++;
                            else 
                                end--;
                        }
                    }
                }
            }
        }
        return four;
    }
};