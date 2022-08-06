class Solution {
public:
    string toLowerCase(string s) {
        string result;
        for(char c:s)
        {
            if(int(c)>=97 and int(c)<=122)
            {
                result.push_back(c);
            }
            else if(int(c)>=65 and int(c)<=90)
            {
                char ch=char(int(c)+32);
                result.push_back(ch);
            }
            else
                result.push_back(c);
        }
        return result;
    }
};