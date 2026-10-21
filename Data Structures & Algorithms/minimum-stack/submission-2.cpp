class MinStack {
public:
    stack<int> minstack;
    stack<int> st;
    int minval= INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        minval= min(val, minval);
        minstack.push(minval);
    }
    
    void pop() {
        st.pop();
        minstack.pop();
        minval = minstack.empty()? INT_MAX: minstack.top();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
