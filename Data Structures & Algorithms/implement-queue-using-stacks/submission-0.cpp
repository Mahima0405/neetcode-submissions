class MyQueue {
public:
    stack<int> mainStack;
    stack<int> tempStack;

    MyQueue() {
    }
    
    void push(int x) {
        while(!mainStack.empty())
        {
            tempStack.push(mainStack.top());
            mainStack.pop();
        }

        mainStack.push(x);

        while(!tempStack.empty())
        {
            mainStack.push(tempStack.top());
            tempStack.pop();
        }
    }
    
    int pop() {
        int ans= mainStack.top();
        mainStack.pop();
        return ans;
    }
    
    int peek() {
        return mainStack.top();
    }
    
    bool empty() {
        return mainStack.empty();
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