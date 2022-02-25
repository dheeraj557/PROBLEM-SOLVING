class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int s = 0, e = nums.size() - 1;
        
        int smallest = nums[0];
        while (s <= e) {
            int mid = s + (e - s)/2;
            // left sorted
            if (nums[mid] >= nums[s]){
                smallest = min(smallest, min(nums[e], nums[s]));
                s = mid + 1;
            }
            // right sorted
            else {
                smallest = min(smallest, nums[mid]);
                e = mid - 1;
            }
        }
        return smallest;
        
    }
};