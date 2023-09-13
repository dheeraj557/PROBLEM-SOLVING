//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum = 0;
        int maxi = 0;
        unordered_map<int,int> mp;
        for(int i = 0;i<N;i++)
        {
            sum += A[i];
            if(sum==K)
            {
                maxi = max(maxi,i+1);
            }
            else if(mp.count(sum-K)>0)
            {
                maxi = max(maxi,i - mp[sum-K]);
            }
            if(mp.count(sum)==0)
            {
              mp[sum] = i;
            }
        }
        return maxi;
        /*unordered_map<int,int>mp;
        int res=0;
        int sum_till_now=0;
        for(int i=0;i<N;i++)
        {
            sum_till_now+=A[i];
            if(sum_till_now==K)
            {
                res=max(res,i+1);
            }
            else if(mp.count(sum_till_now-K)>0)
            {
                res+=max(res,i-mp[sum_till_now-K]);
            }
            if(mp.find(sum_till_now)==mp.end())
            {
                mp[sum_till_now]=i;
            }
        }
        return res;*/
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends