/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
public:
    stack<int>stack1;
    stack<int>stack2;
    MyQueue() {

    }
    void outStack()
    {
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    void push(int x) {
        stack1.push(x);
    }

    int pop() {
        if(stack2.empty())
            outStack();
        int top=stack2.top();
        stack2.pop();
        return top;
    }
    
    int peek() {
        if(stack2.empty())
            outStack();
        return stack2.top();
    }
    
    bool empty() {
        return stack2.empty()&&stack1.empty();
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
// @lc code=end

