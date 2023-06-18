/*class Solution {
public:
    int getArea(vector<int>&v,int n)
    {
        stack<int>st;
        vector<int>leftmin(n,-1),rightmin(n,n);
        int area=0,res=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and v[i]<=v[st.top()])
            {
                st.pop();    
            }
            if(st.empty()==false)
            {
                leftmin[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and v[i]<=v[st.top()])
            {
                st.pop();    
            }
            if(st.empty()==false)
            {
                rightmin[i]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            area=v[i]*(rightmin[i]-leftmin[i]-1);
            res=max(res,area);
        }
        return res;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>mat(n,0);
        int res=0,area=0;
        for(int i=0;i<n;i++)
        {
            if(matrix[0][i]=='0')
            {
                mat[i]=0;
            }
            else
            {
                mat[i]=1;
            }
        }
        area=getArea(mat,n);
        res=max(area,res);
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='0')
                {
                    mat[j]=0;
                }
                else
                {
                    mat[j]+=1;
                }
                area=getArea(mat,n);
                res=max(area,res);
            }
        }
        return res;
    }
};  */


class Solution {
public:
    int solve(vector<int> &arr,int n){
        vector<int> leftSmall(n,-1),rightSmall(n,n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[st.top()]>arr[i]){
                rightSmall[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>arr[i]){
                leftSmall[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        int area=0;
        for(int i=0;i<n;i++){
            area=max(area,(rightSmall[i]-leftSmall[i]-1)*(arr[i]));
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> mat(n,vector<int>(m));
        for(int r=0;r<n;r++)
        {   for(int c=0;c<m;c++){
                mat[r][c]=matrix[r][c]-'0';
            }
        }
        for(int r=0;r<n;r++)
        {   for(int c=0;c<m;c++){
                if(r>0&&mat[r][c]!=0){
                    int curr=mat[r][c];
                    int prev=mat[r-1][c];
                    mat[r][c]=curr+prev;
                }
            }
        }
        int area=0;
        for(int i=0;i<n;i++){
            area=max(area,solve(mat[i],m));
        }
        return area;
    }
};