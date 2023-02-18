class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>>v;
    SeatManager(int n) 
    {
        for(int i=1; i<=n; i++){
            v.push(i);
        }
    }
    int reserve() {
        int l=v.top();
        v.pop();
        return l;
    }
    void unreserve(int seatNumber) {
        v.push(seatNumber);
    }
};