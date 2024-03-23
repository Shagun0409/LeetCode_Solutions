class MinStack {
public:
stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        int m;
        if(st.empty()){
            m=val;

        }
        else{
            m=min(st.top().second,val);
        }
        st.push({val,m});
    }
    
    void pop() {
        if(st.empty()) return ;
        int num=st.top().first;
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
         if (st.empty()) {
      return -1; 
    }
 
    return st.top().second;
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