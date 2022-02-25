class Solution {
public:
    int findPeakElement(vector<int>& arr) {
            int len=arr.size();
        int end=len-1;
        int start=0;
       // int res;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
              //  res=mid;
                end=mid;
            }
            else if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
        }
        //return res
        return start;
    }
};