class Solution {
public:
    int firstBadVersion(int n) {
        return myBinSearch(1, n);
    }
    int myBinSearch(int left, int right){
        if(left == right)
            return right;
        int half = left/2+ right/2;
        if(isBadVersion(half))
            return myBinSearch(left, half);
        else 
            return myBinSearch(half+1, right);
    }
};