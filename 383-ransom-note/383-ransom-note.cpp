class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ret = true;
    
    unordered_map<char,int> umcc_rN;
    unordered_map<char,int> umcc_mz;
    
    for(char ch : ransomNote) umcc_rN[ch]++;
    for(char ch : magazine) umcc_mz[ch]++;
    
    for(char ch : ransomNote)
        if(umcc_rN[ch] > umcc_mz[ch]){ret = false;break;}
    return ret;
    }
};