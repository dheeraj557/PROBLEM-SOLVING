class Solution {
public:
    int par[30],Rank[30];
    int find_parent(int n)
    {
        if(par[n]!=n)par[n]=find_parent(par[n]);
        return par[n];
    }
    void Union(int x,int y)
    {
        x=find_parent(x);
        y=find_parent(y);
        if(x!=y)
        {
            if(Rank[x]>Rank[y])
                par[y]=x;
            else if(Rank[x]<Rank[y])
                par[x]=y;
            else
            {
                par[x]=y;
                Rank[y]++;
            }
        }
    }
    bool equationsPossible(vector<string>& v)
    {
        for(int i=0;i<30;i++)
            par[i]=i,Rank[i]=0;
        for(auto c:v)
        {
            if(c[1]=='=')
                Union(c[0]-'a',c[3]-'a');
        }
        for(auto c:v)
        {
            if(c[1]=='!')
            {
                if(find_parent(c[0]-'a')==find_parent(c[3]-'a'))
                    return false;
            }
        }
        return true;
    }
};