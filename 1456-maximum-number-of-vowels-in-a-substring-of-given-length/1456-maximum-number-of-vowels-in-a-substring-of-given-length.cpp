class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0;
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                count++;
        }
        res=max(res,count);
        for(int i=1;i+k<=s.size();i++)
        {
            if(s[i+k-1]=='a' || s[i+k-1]=='e' || s[i+k-1]=='i' || s[i+k-1]=='o' || s[i+k-1]=='u')
                count++;
            if(s[i-1]=='a' || s[i-1]=='e' || s[i-1]=='i' || s[i-1]=='o' || s[i-1]=='u')
                count--;
            res=max(res,count);
            cout<<count<<" "<<res<<endl;
        }
        return res;
    }
};