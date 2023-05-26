class Solution {
    void permute(string &s, vector<string> &res, int pos) {
        if (pos >= s.length()) {
            res.push_back(s);
            return;
        }
        if (!isdigit(s[pos])) {
            s[pos] = tolower(s[pos]);
            permute(s, res, pos + 1);
            s[pos] = toupper(s[pos]);
        }
        permute(s, res, pos + 1);
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        permute(s, res, 0);
        return res;
    }
};
