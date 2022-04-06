class Solution 
{
    public:
        int threeSumMulti(vector<int> &a, int target) {
            unordered_map<int,int>m;
            long long count=0;
            for(int i=0;i<a.size();i++)
            {
                for(int j=i+1;j<a.size();j++)
                { 
                    int index=target-a[i]-a[j];
                    count+=m[index];
                }
                m[a[i]]++;
            }
            return count%1000000007;
        }
};