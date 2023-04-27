class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0 , m = 0;
        for(int i=0;i<arr.size();i++)
        {
            m=max(arr[i],m);
            if(i==m)
                count++;
        }
        return count;
    }
};