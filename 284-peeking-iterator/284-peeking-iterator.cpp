class PeekingIterator : public Iterator {
    private:
        int *head ;
        int pointer = 0 ,size; 
    public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) 
    {
        int n = nums.size();
	    head = new int[n];
        for(auto c : nums) 
            head[pointer++] = c ;
        pointer = 0 ;
        size = nums.size();    
	}
	int peek() 
    {
        return head[pointer] ;
	}
	int next() 
    {
	    return head[pointer++];
	}
	bool hasNext() const 
    {
	    return pointer<size ;
	}
};