class Solution {
public:
    void help(int open, int close, string &s, vector<string> &ans) {
	if(close == 0 && open == 0) {
		ans.push_back(s);
		return;
	}
	if(open < 0 || close < 0 || open > close) {
		return;
	}
	s.push_back('(');
	help(open-1, close, s, ans);
	s.pop_back();
	s.push_back(')');
	help(open, close-1, s, ans);
	s.pop_back();
}

vector<string> generateParenthesis(int n) {
	vector<string> ans;
	string s;
	help(n, n, s, ans);
	return ans;
}
};