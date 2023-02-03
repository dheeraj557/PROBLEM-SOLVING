class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int> ans;
        int carry = 0;
        digits[size-1]++;
        for (int i = size - 1; i >= 0; i--)
        {
            if (carry == 1)
            {
                digits[i]++;
                carry = 0;
            }
            if (digits[i] == 10)
            {
                ans.push_back(0);
                carry = 1;
            }   
            else
            {   
                ans.push_back(digits[i]);
            } 
        }
        if (carry == 1)
        {
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};