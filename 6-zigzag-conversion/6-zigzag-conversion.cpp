class Solution {
public:
    string convert(string s, int numRows) {
        string result="";
        vector<string>slices(numRows,"");
        int i=0;
        while(i<s.size())
        {
            for(int j=0;j<numRows and i<s.size();j++)
            {
                slices[j]+=s[i];
                i++;
            }
            for(int j=numRows-2;j>0 and i<s.size();j--)
            {
                slices[j].push_back(s[i]);
                i++;
            }
        }
        for(string s:slices)
        {
            result+=s;
        }
        return result;
    }
};