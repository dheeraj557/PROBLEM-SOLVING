class Solution {
public:
    int longestPalindrome(string s) {
        int flag=0,ans=0;
        unordered_map<char,int> mp;
        for(auto c:s)
            mp[c]++;
        for(auto x:mp){
            ans+=(x.second/2);  //add the number of pairs of same character
            if(x.second&1)  //check whether there is an odd character
                flag=1;
        }
        ans*=2;     //as we were only calculating the number of pairs in above loop
        ans+=flag;  //we can place one odd char in the middle of the string
        return ans;
    }
};