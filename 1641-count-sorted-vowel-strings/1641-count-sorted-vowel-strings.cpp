class Solution 
{
public:
    int cur[5];
    int countVowelStrings(int n) {
        if (n == 1) return 5;
        int prev[5] = {1,1,1,1,1};
        cur[0] = 1;
        for (int i = 1; i < n; i++) {
            for (int i = 1; i < 5; i++) {
                cur[i] = cur[i-1] + prev[i];
                prev[i] = cur[i];
            }
        }
        int res = 0;
        for (int i = 0; i < 5; i++) {
            res += cur[i];
        }
        return res;
    }
};