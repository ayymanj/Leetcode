#include <queue>
#include <stdexcept>

class MyStack {
private:
    std::queue<int> q1;
    std::queue<int> q2;

public:
    MyStack() {
        
    }

    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        std::queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int pop() {
        if (q1.empty()) {
            throw std::runtime_error("Stack is empty. Cannot pop from an empty stack.");
        }
        int top_element = q1.front();
        q1.pop();
        return top_element;
    }

    int top() {
        if (q1.empty()) {
            throw std::runtime_error("Stack is empty. Cannot get top of an empty stack.");
        }
        return q1.front();
    }

    bool empty() {
        return q1.empty();
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


