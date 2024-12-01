class MinStack {
private:
    vector<int> v;
    vector<int> min;

public:
    MinStack() { }
    
    void push(int val) {
        v.push_back(val);
        min.push_back(val);
        sort(min.begin(),min.end());
    }
    
    void pop() {
        int k=v[v.size()-1];
        int c = count(v.begin(), v.end(), v[v.size()-1]);
        erase(min, v[v.size()-1]);
        v.pop_back();
        for(int i=1;i<c;i++){
            min.push_back(k);
        }
        sort(min.begin(),min.end());
    }
    
    int top() {
        if(v.size()==0) return -1;
        else return v.back();
    }
    
    int getMin() {
        if(v.size()==0) return -1;
        return min[0];
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */