class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string ans;
    int j = 0; 
        
    if(word1.length() >= word2.length()){
        for(int i =0;i < word1.length();i++){
            ans.push_back(word1[i]);
            if( i < word2.length())
                ans.push_back(word2[i]);
        }
    }
    else if (word1.length() < word2.length()){
           for(int i =0;i <word2.length();i++){
               if( i < word1.length())
                   ans.push_back(word1[i]);
                ans.push_back(word2[i]);
           }
        }
    return ans;
    }
};