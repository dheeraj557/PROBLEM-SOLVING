class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int res=-1,dist=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            if(x==points[i][0] or y==points[i][1])
            {
                int d=abs(x-points[i][0])+abs(y-points[i][1]);
                if(d<dist)
                {
                    dist=min(d,dist);
                        res=i;
                }
            }
        }
        return res;
    }
};