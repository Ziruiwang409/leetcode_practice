class MyStack {
public:
    queue<int> queue_in;
    queue<int> queue_out;

    MyStack() {

    }
    
    void push(int x) {
        queue_in.push(x);
    }
    
    int pop() {
        int num1 = queue_in.size();
        //留最后一个元素不要删去
        while (num1 > 1){
            queue_out.push(queue_in.front());
            queue_in.pop();
            num1--;
        }
        int result = queue_in.front();
        queue_in.pop();
        while (!queue_out.empty()){
            queue_in.push(queue_out.front());
            queue_out.pop();
        }
        return result;
    }
    
    int top() {
        return queue_in.back();
    }
    
    bool empty() {
        return queue_in.empty();
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