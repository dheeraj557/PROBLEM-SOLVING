class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int size=words.size(),count1=0,oddEven_occurrence=0;
        bool check=false;
        unordered_map<string,int> mp;
        for(auto it:words)
            mp[it]++;
        for(auto it:mp){
            string s=it.first;
            if(s[0]!=s[1]){
                string h=s;
                reverse(h.begin(),h.end());
                if(mp.find(h)!=mp.end()){
                    count1 += 4*min(mp[s],mp[h]);
                    mp.erase(h);
                }
            }
            else{
                if(it.second & 1){
                    check=true;
                    oddEven_occurrence+=it.second-1;
                }
                else
                    oddEven_occurrence+=it.second;
            }
        }
        if(count1 != 0)
        {
            if(check)
                return count1 + oddEven_occurrence*2 + 2;
            return count1 + oddEven_occurrence*2;
        }
        if(check)
            return oddEven_occurrence*2 + 2;
        return oddEven_occurrence*2;
    }
};