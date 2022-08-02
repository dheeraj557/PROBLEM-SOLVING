class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int>result(n,-1);
        unordered_map<int,int>s;
        for(int i=0;i<nums2.size();i++)
        {
            int no=nums2[i];
            s[no]=i;
        }
        for(int i=0;i<n;i++)
        {
            int no=nums1[i];
            int j=s[no]+1;
            while(j<m)
            {
                if(nums2[j]>nums1[i])
                    break;
                j++;
            }
            if(j!=m)
                result[i]=nums2[j];
        }
        return result;
    }
};