class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int mindif=INT_MAX;
        int n=arr.size();
        vector<vector<int>>result;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]<mindif)
                mindif=arr[i+1]-arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]==mindif)
                result.push_back({arr[i],arr[i+1]});
        }
        return result;
    }
};