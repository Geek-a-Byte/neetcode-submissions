class MinStack {
private:
    stack<int> s;
    stack<int> min_s;
public:
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(min_s.size()>0)
        {
            min_s.push(min(this->min_s.top(), val));
        }
        else
        {
            min_s.push(val);
        }
    }
    
    void pop() {
        s.pop();
        min_s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_s.top();
    }
        
};
