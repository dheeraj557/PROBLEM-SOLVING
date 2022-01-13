class Solution {
public:
    int lengthOfLastWord(string s) {
      int lent = s.length();
        int cnt = 0;
        if(lent==1)
            return 1;
        for(int i=lent-1;i>=0;i--){        
            if(s[i]==' ')
                continue;
            else{
                cnt++;
                if(i==0)
                    break;
                if(s[i-1]==' ')
                    break; 
            }
        }
        return cnt;  
    }
};