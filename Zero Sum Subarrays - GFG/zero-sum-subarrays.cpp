// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    ll findSubarray(vector<ll> arr, int n ) 
    {
        unordered_map<int, vector<int> > map;
        ll out=0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
                out++;
            if (map.find(sum) != map.end())
            {
                vector<int> vc = map[sum];
                for (auto it = vc.begin(); it != vc.end(); it++)
                    out++;
            }
            map[sum].push_back(i);
        }
        return out;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends