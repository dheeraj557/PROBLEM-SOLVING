class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pv=0, nv=0, result=0;
        for(int i=0;i<nums.size();i++) {
            
            if(nums[i]==0) 
                pv=nv=0;
            else if (nums[i]>0) 
            {
                pv++;
                if(nv!=0) nv++;
            }
            else 
            {
                swap(pv,nv);
                nv++;
                if(pv!=0) pv++;
            }
            result=max(result, pv);
        }
        return result;
    }
};