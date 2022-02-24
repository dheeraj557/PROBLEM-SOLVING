class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!nums.size()) return {-1,-1};
        
        int low = 0, high = nums.size()-1;        
        int firstPos = -1, lastPos = -1;
        while(low < high){
            int mid = low + (high-low)/2;
            if(nums[mid] < target) 
                low = mid+1;
            else 
                high = mid;
        }        
        if(nums[low] != target) 
            return {-1,-1};
        firstPos = low;
        high = nums.size()-1;
        while(low < high){
            int mid = (low + (high-low)/2) + 1;
            
            if(nums[mid] > target) high = mid-1;
            else low = mid;
        }
        lastPos = high;
        return {firstPos, lastPos};
    }
};