class FreqStack {
public:
    unordered_map<int,int> m;
    stack<pair<int,int>>st;
    FreqStack()
    {
        while(st.size())
            st.pop();
    }
    void push(int val)
    {
        m[val]++;
        if(st.size()==0)
            st.push(make_pair(val,m[val]));
        else
        {
            stack<pair<int,int>>temp;
            while(st.size() && st.top().second>m[val]){
                temp.push(st.top());
                st.pop();
        }
        st.push(make_pair(val,m[val]));
        while(temp.size())
        {
            st.push(temp.top());
            temp.pop();
        }
    }
}
int pop() 
{
    if(st.size())
    {
        pair<int,int> ans=st.top();
        st.pop();
        m[ans.first]--;
        return ans.first;
    }
    return -1;
}
};

