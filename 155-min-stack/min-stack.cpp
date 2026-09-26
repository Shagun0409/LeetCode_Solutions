class MinStack {
public:

stack<pair<int,int>>st;
    MinStack() {
        
        
    }
    
    void push(int value) {
        int m;
        if(st.empty()){
            m=value;
        }else{
            m=min(st.top().second,value);
        }
        st.push({value,m});
        
    }
    
    void pop() {
        if(st.empty()){
           return;
        }
        st.pop();

        
    }
    
    int top() {
       if(st.empty()) return -1;
        else
        {
            return st.top().first;
        }
        
    }
    
    int getMin() {
return st.top().second;
    }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */