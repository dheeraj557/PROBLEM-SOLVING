class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        vector<int>result;
        for(int i:nums)
        {
            if(i%2==0)
                sum+=i;
        }
        for(int i=0;i<queries.size();i++)
        {
            int index=queries[i][1];
            int operand = nums[index];
            int add=queries[i][0];
            nums[index]+=add;
            if(operand%2==0)
                sum-=operand;
            operand=nums[index];
            if(operand%2==0)
                sum+=operand;
            result.push_back(sum);
        }
        return result;
    }
};