class Solution {
public:
    void merge(vector<int>&array,int s,int e)
    {
        int i=s;
        int m=(s+e)/2;
        int j=m+1;
        vector<int>temp;
        while(i<=m && j<=e)
        {
            if(array[i]<array[j])
                temp.push_back(array[i++]);
            else
                temp.push_back(array[j++]);
        }
        while(i<=m)
        {
            temp.push_back(array[i++]);
        }
        while(j<=e)
        {
            temp.push_back(array[j++]);
        }
        int k=0;
        for(int i=s;i<=e;i++)
            array[i]=temp[k++];
    }
    void mergesort(vector<int>&array,int s, int e)
    {
        if(s>=e)
            return;
        int mid=(s+e)/2;
        mergesort(array,s,mid);
        mergesort(array,mid+1,e);
        return merge(array,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        mergesort(nums,i,j);
        return nums;
    }
};