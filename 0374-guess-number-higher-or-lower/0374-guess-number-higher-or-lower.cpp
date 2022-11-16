class Solution {
public:
    int guessNumber(int n) 
    {
        int lo=1,hi=n;
        while(true)
        {
            int mid=lo+(hi-lo)/2;  // Do NOT use (maxNumber+minNumber)/2 in case of over flow
            int res=guess(mid);
            if(res==0) 
                return mid;
            else if(res==1)
                lo=mid+1;
            else
                hi=mid-1;
        }
    }
};