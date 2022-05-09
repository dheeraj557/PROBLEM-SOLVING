class Solution {
private:
    //getparent function is used to get the parent of given node     
    int getparent(int i,vector<int>& parent)
    {
        if(parent[i]==-1)
        {
            return i;
        }
        //we are storing the ultimate parent(the main parent of that component) in parent[i], which is also known as path compression. for example, if a is parent of b, and b is parent of c, then the parent(main) of c is a.
        return parent[i]=getparent(parent[i],parent);
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> parent(n,-1);
        vector<int> rank(n,0);
        int extra=0;
        //by iterating through the given edges, we are couting the extra connections between the computers
        for(int i=0;i<connections.size();i++)
        {
            int a=connections[i][0];
            int b=connections[i][1];
            int p1=getparent(a,parent);
            int p2=getparent(b,parent);
            if(p1!=p2){
                if(rank[p1]>rank[p2]){
                    parent[p2]=p1;
                }
                else if(rank[p2]>rank[p1]){
                    parent[p1]=p2;
                }
                else
                {
                    parent[p1]=p2;
                    rank[p2]++;
                }
            }
            else
            {
                extra++;
            }
        }
        //by iterating through the all the computers, we are checking the total number of components in graph
        int count=0;
        for (int i=0; i<n; i++){
            if (parent[i] == -1) count++;
        }
        //we are using count-1, so as to not include the main component and the remaining connections needed, with the extra connections(edges) we have.
        if(extra >= count-1)
        {
            return count-1;
        }
        //return -1, if we dont have sufficient connections
        return -1;
    }
};