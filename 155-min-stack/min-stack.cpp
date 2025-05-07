class MinStack {
    private: 
    stack<int> minS;
    stack<int> mainS;
public:
    MinStack() {
   
        
    }
    
    void push(int val) {
        mainS.push(val);
        if(minS.empty() || val<=minS.top()){
            minS.push(val);
        }
        
        
    }
    
    void pop() {
        if(minS.top()==mainS.top()){
            minS.pop();
        }
        
       mainS.pop();
    }
    
    int top() {
        return mainS.top();
        
    }
    
    int getMin() {
        return minS.top();

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