bool compare(vector<int>&a,vector<int>&b)
{
    if(a[1]==b[1])
        return a[0]<b[0];
    return a[1]<b[1];
    }
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),compare);
        priority_queue<int>pq;
        int last=0;
        for(int i=0;i<courses.size();i++)
        {
            int duration=courses[i][0],deadline=courses[i][1];
            if(last+duration<=deadline)
            {
                pq.push(duration);
                last+=duration;
            }
            else
            {
                if(!pq.empty() and duration <pq.top() and(last-pq.top()+duration<=deadline))
                {
                    last+=duration-pq.top();
                    pq.pop();
                    pq.push(duration);
                }
            }
        }
        return pq.size();
    }
};