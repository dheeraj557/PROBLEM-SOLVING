class Solution {
public:
    int scoreOfParentheses(string str) {
        int n = str.size();
        stack<int> st;
        int score = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '(')
            {
                st.push(score);       
                score = 0;
            }
            else
            {
                score = st.top() + max(2 * score, 1);
                st.pop();
            }
        }
        return score;
    }
};