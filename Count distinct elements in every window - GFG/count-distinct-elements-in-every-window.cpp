// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<k;i++)
        {
            m[A[i]]++;
        }
        res.push_back(m.size());
        for(int i=0;i<n-k;i++)
        {
            m[A[i+k]]++;
            if(m[A[i]]==1)
            {
                m.erase(A[i]);
            }
            else
            m[A[i]]--;
            res.push_back(m.size());
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends