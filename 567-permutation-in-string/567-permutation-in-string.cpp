class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> umap1;
        unordered_map<char,int> umap2;
        for(int i=0;i<s1.size();i++){
            umap1[s1[i]]++;
        }
        int i=0,j=0;
        while(j<s2.size()){
            umap2[s2[j]]++;
            while(j-i+1>s1.size()){
                umap2[s2[i]]--;
                if(umap2[s2[i]]==0) 
                    umap2.erase(s2[i]);
                i++;
            }
            if((umap1==umap2)) return true;
            j++;
        }
        return false;
    }
};