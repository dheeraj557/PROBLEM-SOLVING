class Solution {
public:
    int trap(vector<int>& height) {
        int pl = 0, pr = height.size() - 1;
        int left = height[pl], right = height[pr];
        int trapped = 0;
        while (pl <= pr) {
            if (left <= right) {
                int h = height[pl++];
                left = max(left, h);
                trapped += left - h;
                
            } else {
                int h = height[pr--];
                right = max(right, h);
                trapped += right - h;                
            }
        }
        return trapped;
    }
};