/*
Author: Ravi Teja Gannavarapu

Difficulty: Easy

https://leetcode.com/problems/min-stack/
*/


class MinStack {
private:
    
    struct Data {
        // If confused about val(v), min(m), search for
        // "c++ constructor initializer list".
        Data(int v, int m): val(v), min(m) {}
        int val;
        int min;
    };
    stack<Data> s;

public:
    
    /** initialize your data structure here. */
    MinStack() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    void push(int x) {
        int minel = s.empty() ? x : min(x, s.top().min);
        s.push(Data(x, minel));
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().val;
    }
    
    int getMin() {
        return s.top().min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
