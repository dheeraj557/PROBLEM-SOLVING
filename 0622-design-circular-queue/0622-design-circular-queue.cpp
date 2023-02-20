class MyCircularQueue {
    private:
        vector<int> v;
        int start = 0;
        int len = 0;
    public:
        MyCircularQueue(int k) 
        {
            v = vector<int>(k);
        }
        bool enQueue(int value)
        {
            if(!isFull())
            {
                v[(start + len++)%v.size()] = value;
                return true;
            }
            else
                return false;
        }
        bool deQueue() 
        {
            if(!isEmpty()) 
            {
                start = (start + 1)%v.size();
                len--;
                return true;
            }
            else
                return false;
        }
        int Front()
        {
            if(isEmpty()) 
                return -1;
            return v[start];
        }
        int Rear() 
        {
            if(isEmpty()) 
                return -1;
            return v[(start + len -1)%v.size()];
        }
        bool isEmpty()
        {
            return !len;
        }
        bool isFull() 
        {
            return v.size() == len;
        }
};