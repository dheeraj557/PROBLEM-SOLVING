class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>hashT;
        int digS;
        while(n != 1){
            if(hashT[n]) return false;
            hashT[n]++;
            digS = 0;
            while(n){
                digS += pow(n%10,2);
                n /= 10;
            }
            n = digS;
        }
        return true;
    }
};