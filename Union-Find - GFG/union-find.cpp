// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int findpar(int a,int par[])
    {
        if(par[a]==a)
            return a;
        return par[a]=findpar(par[a],par);
    }
    void union_( int a, int b, int par[], int rank1[]) 
    {
        a=findpar(a,par);
        b=findpar(b,par);
        if(rank1[a]<rank1[b])
            par[a]=findpar(b,par);
        else if(rank1[b]<rank1[a])
            par[b]=findpar(a,par);
        else
        {
            int p=findpar(a,par);
            par[b]=p;
            rank1[p]++;
        }
    }
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        if(findpar(x,par)==findpar(y,par))
            return true;
        return false;
    }
};

// { Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}
  // } Driver Code Ends