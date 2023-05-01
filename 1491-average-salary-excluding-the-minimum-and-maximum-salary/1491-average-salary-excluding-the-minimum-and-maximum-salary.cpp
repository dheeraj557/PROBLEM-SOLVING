class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        double smallest=INT_MAX,largest=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            if(salary[i]>largest)
                largest=salary[i];
            if(salary[i]<smallest)
                smallest=salary[i];
            sum+=salary[i];
            cout<<largest<<" "<<smallest<<" "<<sum<<endl;
        }
        sum-=smallest;
        sum-=largest;
        return sum/(n-2);
    }
};