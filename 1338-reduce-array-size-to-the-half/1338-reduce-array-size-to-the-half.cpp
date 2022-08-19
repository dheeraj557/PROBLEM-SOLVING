class Solution {
public:
    //storing value in the map to get the freq of the element of the array
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        //storing the freq in vector so that we can easily access highest freq by sorting the  vector
        vector<int> freq;
        int sum=0;
        for(auto x:m){
            freq.push_back(x.second);
            sum+=x.second;
        }
       int size=sum;
       int count=0;
    sort(freq.begin(),freq.end());
        
        //we are using loop till at least half of the integers of the array are removed.
        while(size>(sum/2)){
            size=size-freq.back();
           freq.pop_back();
        //we are storing the count of element that are removed
             count++;
            
        }
       
        return count;
    }
};