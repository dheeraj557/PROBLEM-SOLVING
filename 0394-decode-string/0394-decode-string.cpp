class Solution {
public:
    string decodeString(string str) {
        stack<char>st;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ']') st.push(str[i]);
        else{
            string temp;
            while (!st.empty() && st.top() != '[') temp = st.top() + temp, st.pop();
            st.pop();
            string num;
            while (!st.empty() && isdigit(st.top())) num = st.top() + num, st.pop();
            int number = stoi(num);
            string repeat;
            for (int j = 0; j < number; j++) repeat += temp;
            for (auto c : repeat) st.push(c);
        }
    }
    string ans;
    while (!st.empty()) ans = st.top() + ans, st.pop();
    return ans;
    }
};