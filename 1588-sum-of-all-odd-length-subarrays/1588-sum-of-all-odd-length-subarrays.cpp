class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     for(int i=1;i<arr.size();i++)
     {
         arr[i]=arr[i]+arr[i-1];
     }
     int sum=0;
     for(int i=2;i<arr.size();i++)
     {
          if(i%2==0)
          {
              sum += arr[i];
          }
          for(int j=i-1;j>0;j--)
          {
              if(j%2==0 && j!=0)
              {
                  sum += arr[i]-arr[i-j-1];
              }
          }
      }
        sum +=arr[arr.size()-1];
        return sum;
    }
};