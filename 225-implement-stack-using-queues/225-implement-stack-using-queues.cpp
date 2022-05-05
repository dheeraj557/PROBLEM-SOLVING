class MyStack {
public:
    queue<int> q;
    queue<int> p;
    MyStack() 
    {  
    }
    void push(int x) 
    {     
        q.push(x);
    }
    int pop() {
        while(q.size()!=1)
        {
            p.push(q.front());
            q.pop();
        }
        int y=q.front();
        q.pop();
        while(p.size()!=0)
        {
            q.push(p.front());
            p.pop();
        }
        return y;   
    }
    int top() 
    {
        int k = pop();
        q.push(k);
        return k;    
    }
    bool empty() 
    {   
        return q.size()==0;
    }
};