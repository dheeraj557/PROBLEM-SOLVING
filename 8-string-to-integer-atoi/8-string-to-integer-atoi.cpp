class Solution {
public:
    int myAtoi(string s) {
        int index = -1, n=s.length();
        while(++index < n)
            if(s[index] != ' ') 
                break;
        bool isNeg = s[index] == '-';
        if(s[index] == '+' || s[index] == '-') ++index;
        long ans = 0;
        while(index < n && ans < INT_MAX)
            if(s[index] >= '0' && s[index] <= '9') 
                ans = ans*10 + (s[index++] - '0');
            else break;
        ans = isNeg? -ans : ans;
        return ans > INT_MAX ? INT_MAX : ans < INT_MIN ? INT_MIN : ans;
    }
};