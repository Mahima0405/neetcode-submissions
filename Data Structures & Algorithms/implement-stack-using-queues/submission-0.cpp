class MyStack {
public:
    queue<int> mainQueue;
    queue<int> tempQueue;
    int topInt= -1;

    MyStack() {
    }
    
    void push(int x) {
        topInt = x;
        mainQueue.push(x);
    }
    
    int pop() {
        if(mainQueue.empty())
        {
            return -1;
        }

        while(mainQueue.size() > 1)
        {
            int x= mainQueue.front();
            tempQueue.push(x);
            topInt = x;
            mainQueue.pop();
        }
        int ans= mainQueue.front();
        mainQueue.pop();

        while(!tempQueue.empty())
        {
            mainQueue.push(tempQueue.front());
            tempQueue.pop();
        }

        return ans;
    }
    
    int top() {
        return topInt;
    }
    
    bool empty() {
        return mainQueue.empty();
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