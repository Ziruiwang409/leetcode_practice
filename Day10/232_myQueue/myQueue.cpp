class MyQueue {
public:
    stack<int> in_stack;
    stack<int> out_stack;
    MyQueue() {
    }
    
    void push(int x) {
        in_stack.push(x);
    }
    
    int pop() {
        //如果出队列是空的，此时需要将所有入队列中的元素放到出队列
        if (out_stack.empty()){
            while (!in_stack.empty()) {
                out_stack.push(in_stack.top());
                in_stack.pop();
            }
        }
        int result = out_stack.top();
        out_stack.pop();
        return result;
    }
    
    int peek() {
        if (out_stack.empty()){
            while (!in_stack.empty()) {
                out_stack.push(in_stack.top());
                in_stack.pop();
            }
        }
        return out_stack.top();
    }
    
    bool empty() {
        return out_stack.empty() && in_stack.empty();
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