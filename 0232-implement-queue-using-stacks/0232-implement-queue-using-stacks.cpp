class MyQueue {
public:
    stack<int> s;
    stack<int> p;

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int size=s.size();
        while(size>1){
            int x=s.top();
            s.pop();
            p.push(x);
            size--;
        }
        int x=s.top();
        s.pop();
        size=p.size();
        while(size>0){
            int y=p.top();
            p.pop();
            s.push(y);
            size--;
        }
        return x;
    }
    
    int peek() {
        int size=s.size();
        while(size>0){
            int x=s.top();
            s.pop();
            p.push(x);
            size--;
        }
        int x=p.top();
        size=p.size();
        while(size>0){
            int y=p.top();
            p.pop();
            s.push(y);
            size--;
        }
        return x;
    }
    
    bool empty() {
        if(s.empty()) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */