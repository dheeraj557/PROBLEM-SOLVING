class Solution {
public:
    double average(vector<int>& salary) {
        int max=INT_MIN,min=INT_MAX;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]>max)
                max=salary[i];
            if(salary[i]<min)
                min=salary[i];
        }
        double sum=0;
        int n=salary.size()-2;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]==max or salary[i]==min)
                continue;
            sum+=salary[i];
        }
        return (sum/n);
    }
};