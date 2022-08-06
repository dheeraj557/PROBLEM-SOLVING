class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
                    unordered_map<int,int> ump;
            for(int i=0;i<order.length();i++){
                ump[order[i]]=i;
            }
        int index = -1;
        for(int i=0;i<words.size()-1;i++)
        {
            string f = words[i];
            string s = words[i+1];  
            
            for(int i=0;i<min(f.length(),s.length());i++){
            
                if(s[i]==f[i]) continue;
                int index_f_ch =ump[f[i]]; 
                int index_s_ch =ump[s[i]]; 
                if(index_f_ch>index_s_ch){
                    return false;
                }else{
                    break;
                }
                    
            }
                if(f.length()>s.length() && ump[f[s.length()-1]]>=ump[s[s.length()-1]]) return false;
        }
        return true;
    }
};