class Solution {
public:
    vector<vector<string>> ans;
    bool isP(string& ss){
        for(int i=0, j=ss.size()-1;i<j;i++, j--) if(ss[i]!=ss[j]) return false;
        return true;
    }
    void p(string& s, vector<string>& v, int a){
        for(int i=a;i<s.size();i++){
            string t(s.substr(a, i-a+1));
            if(isP(t)){
                v.push_back(t);
                if(i==s.size()-1) ans.push_back(v);
                else p(s, v, i+1);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> v;
        p(s, v, 0);
        return ans;
    }
};