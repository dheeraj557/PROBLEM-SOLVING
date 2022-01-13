class Solution {
public:
    int titleToNumber(string c) {
        int ans = 0;
        int counter = 0;
        int l = c.length();
        for(int i=0; i<c.length(); i++){
            int add = c[i]-'A'+1;
            int pre = pow(26, l-i-1);
            ans += (pre*add);
        }
        return ans;
    }
};