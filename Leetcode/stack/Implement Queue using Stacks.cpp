// https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {

private:
    stack<int>input, output;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int val = peek();
        output.pop();
        return val;
    }
    
    int peek() {
        if( output.empty() ){
            while( input.empty() != true ){
                output.push(input.top());
                input.pop();
            }
        }
        
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
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
