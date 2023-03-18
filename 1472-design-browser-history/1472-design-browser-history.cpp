class BrowserHistory {
public:
stack<string> a;
stack<string> b;
BrowserHistory(string homepage) {
a.push(homepage);
}
void visit(string url) {
    a.push(url);
    while(!b.empty()){
        b.pop();
    }
}
string back(int steps) {
    while(a.size()>1 && steps!=0){
        b.push(a.top());
        a.pop();
        steps--;
    }
    return a.top();
}
string forward(int steps) {
    while(b.size()>0 && steps!=0){
        a.push(b.top());
        b.pop();
        steps--;
    }
    return a.top();
}
};