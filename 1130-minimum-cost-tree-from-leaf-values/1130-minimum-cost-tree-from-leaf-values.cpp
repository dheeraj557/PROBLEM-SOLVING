class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) 
    {
        int res = 0;
        while(arr.size() > 1)
        {
            int minPrd = INT_MAX; 
            int minIdx  = -1;
            for(int i = 0; i < arr.size() - 1; i++)
            {
                int temp = arr[i] * arr[i + 1];
                if(temp < minPrd)
                {
                    minPrd = temp;
                    minIdx = i;
                }
            }
            res += minPrd;
			arr[minIdx] = max(arr[minIdx], arr[minIdx + 1]);
            arr.erase(arr.begin() + (minIdx + 1));
        }
        return res;
    }
};