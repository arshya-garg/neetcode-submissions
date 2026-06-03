class MinStack {
public:
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(val);
        }
        else{
            int ele = minst.top();
            if(val<ele)
                minst.push(val);
            else
                minst.push(ele);
        }
    }
    
    void pop() {
        if(!st.empty())
            st.pop();
        if(!minst.empty())
            minst.pop();
    }
    
    int top() {
        return st.top(); 
    }
    
    int getMin() {
        return minst.top();
    }
};
