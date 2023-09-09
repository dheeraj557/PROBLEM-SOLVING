//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        int max_d=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i])!=mp.end())
            {
                max_d=max(max_d,i-mp[arr[i]]);
            }
            else
            {
                mp[arr[i]]=i;
            }
        }
        return max_d;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends