class MyStack {
public:
    queue<int> q;
    queue<int> p;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int size=q.size();
        while(size>1){
            int x=q.front();
            q.pop();
            p.push(x);
            size--;
        }
        int x=q.front();
        q.pop();
        size=p.size();
        while(size>0){
            int y=p.front();
            p.pop();
            q.push(y);
            size--;
        }
        return x;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        if(q.empty()) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */