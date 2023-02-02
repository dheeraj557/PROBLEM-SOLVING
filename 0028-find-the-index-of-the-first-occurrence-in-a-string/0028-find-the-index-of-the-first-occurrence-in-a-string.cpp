class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        string temp="";
        for(int i=0;i<needle.length();i++)
        {
            temp+=haystack[i];
        }
        if(temp==needle)
            return 0;
        for(int i=needle.length();i<haystack.length();i++)
        {
            temp+=haystack[i];
            temp.erase(0,1);
            if(temp==needle)
                return i-needle.length()+1;
        }
        return -1;
    }
};