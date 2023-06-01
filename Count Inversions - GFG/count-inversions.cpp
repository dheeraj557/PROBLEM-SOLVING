//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    long long int count=0;
    void merge(vector<long long int>&v,int low,int mid,int high)
    {
        int n1=mid-low+1,n2=high-mid;
        vector<long long int>left(n1);
        vector<long long int>right(n2);
        vector<long long int>temp;
        for(int i=0;i<n1;i++)
        {
            left[i]=v[low+i];
        }
        for(int i=0;i<n2;i++)
        {
            right[i]=v[mid+1+i];
        }
        int i=0,j=0,k=low;
        while(i<n1 and j<n2)
        {
            if(left[i]<=right[j])
            {
                v[k++]=left[i++];
            }
            else if(left[i]>right[j])
            {
                count+=n1-i;
                v[k++]=right[j++];
            }
        }
        while(i<n1)
        {
            v[k++]=left[i++];
        }
        while(j<n2)
        {
            v[k++]=right[j++];
        }
    }
    void mergesort(vector<long long int>&v,int low,int high)
    {
        if(low<high)
        {
            int mid=low+(high-low)/2;
            mergesort(v,low,mid);
            mergesort(v,mid+1,high);
            merge(v,low,mid,high);
        }
    }
    long long int inversionCount(long long arr[], long long N)
    {
        vector<long long int>v;
        for(int i=0;i<N;i++)
        {
            v.push_back(arr[i]);
        }
        mergesort(v,0,N-1);
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends