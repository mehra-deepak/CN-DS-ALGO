#include<queue>
using namespace std;
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
    }
    queue<int> q1;
    queue<int> q2;
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q1.size()>1) {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();

        // Swapping the Queues such that q2 again becomes empty
        queue<int> x = q2;
        q2=q1;
        q1=x;
        return ans;
    }

    /** Get the top element. */
    int top() {
        return q1.back();
    }

    /** Returns whether the stack is empty. */
    bool isEmpty() {
        return (q1.size()==0);
    }
};

