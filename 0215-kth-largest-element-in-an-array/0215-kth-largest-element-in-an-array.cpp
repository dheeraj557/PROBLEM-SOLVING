class Solution {
public:
    int partition(vector<int>&nums,int start,int end)
    {
        int pivot=end;
        int i=start-1,j=start;
        while(j<end)
        {
            if(nums[j]>nums[pivot])
            {
                swap(nums[j],nums[++i]);
            }
            j++;
        }
        swap(nums[i+1],nums[pivot]);
        return i+1;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int pivot=partition(nums,start,end);
            if(pivot==k-1)
            {
                return nums[pivot];
            }
            else if(pivot<k-1)
            {
                start=pivot+1;
            }
            else
            {
                end=pivot-1;
            }
        }
        return 0;
    }
};