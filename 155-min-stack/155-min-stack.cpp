class MinStack {
private:
    stack <int> st;
    stack <int> minSt;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minSt.size() == 0 or minSt.top() >= val){
            minSt.push(val);
        }
    }
    
    void pop() {
        if(st.empty()) return ;
        
        if(st.top() == minSt.top()){
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top();
    }
    int getMin() {
         if(st.empty()) return -1;
        return minSt.top();
    }
};
