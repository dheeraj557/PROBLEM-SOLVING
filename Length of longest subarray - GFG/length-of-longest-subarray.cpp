//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


long long int longestSubarry(long long int A[], long long int N) {
    long long int res=0,currmax=0;
    for(int i=0;i<N;i++)
    {
        currmax=0;
        while(i<N and A[i]>0)
        {
            currmax++;
            i++;
        }
        res=max(res,currmax);
    }
    return res;
}