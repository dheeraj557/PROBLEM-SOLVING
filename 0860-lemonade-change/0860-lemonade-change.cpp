class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0; int tens=0;
        int n= bills.size();
        for (int i=0; i<n; i++){
            if (bills[i]==5)fives++;
            if (bills[i]==10){
                tens++;
                if (fives==0)return false;
                fives--;
            }
            if (bills[i]==20){
                if (tens>0 && fives>0){
                    tens--;
                    fives--;
                }
                else if (fives>=3){
                    fives-=3;
                }
                else return false;
            }
        }
        return true;
    }
};