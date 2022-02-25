class Solution {
public:
    int findPeakElement(vector<int>& arr) {
            int len=arr.size();
        int end=len-1;
        int start=0;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){
                end=mid;
            }
            else if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
        }
        return start;
    }
};