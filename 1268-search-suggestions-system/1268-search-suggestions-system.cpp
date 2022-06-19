class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int n=searchWord.size();
        vector<vector<string>>result;
        sort(products.begin(),products.end());
        unordered_map<string,vector<string>>m;
        for(auto x:products)
        {
            string s="";
            for(int i=0;i<x.size();i++)
            {
                s+=x[i];
                if(m[s].size()<3)
                    m[s].push_back(x);
            }
        }
        string s="";
        for(int i=0;i<searchWord.size();i++)
        {
            s+=searchWord[i];
            result.push_back(m[s]);
        }
        return result;
    }
};