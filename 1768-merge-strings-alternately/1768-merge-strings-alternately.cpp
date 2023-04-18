class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        queue<int>q1,q2;
        string result;
        bool flag=false;
        for(int i=0;i<word1.size();i++)
        {
            q1.push(word1[i]);
        }
        for(int i=0;i<word2.size();i++)
        {
            q1.push(word2[i]);
        }
        int i=0 , j=0;
        while(i<word1.size() and j<word2.size())
        {
            if(flag==false)
            {
                result.push_back(word1[i]);
                i++;
                flag=true;
            }
            else
            {
                result.push_back(word2[j]);
                j++;
                flag=false;
            }
        }
        while(i<word1.size())
        {
            result.push_back(word1[i]);
            i++;
        }
        while(j<word2.size())
        {
            result.push_back(word2[j]);
            j++;
        }
        return result;
    }
};