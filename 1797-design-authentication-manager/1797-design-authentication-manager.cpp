class AuthenticationManager
{
public:
    int n;
    AuthenticationManager(int timeToLive)
    {
        n = timeToLive;
    }
    unordered_map<string, int> mp;
    void generate(string tokenId, int currentTime)
    {
        if(mp.find(tokenId) == mp.end())
        {
            mp.insert({tokenId, currentTime});
        }
    }
    void renew(string tokenId, int currentTime)
    {
        if(mp.find(tokenId) != mp.end())
        {
            if(n + mp[tokenId] > currentTime)
            {
                mp[tokenId] = currentTime;
            }
        }
    }  
    int countUnexpiredTokens(int currentTime)
    {
        int ans = 0;
        for(auto x : mp)
        {
            if(x.second + n > currentTime)
            {
                ans++;
            }
        }
        return ans;
    }
};