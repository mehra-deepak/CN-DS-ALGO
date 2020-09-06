#include<stack>
using namespace std;
class QueueUsingStack
{

public:
    QueueUsingStack()
    {

    }
    stack<int> s1;

    stack<int> s2;

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        int ans = s2.top();
        s2.pop();

        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }
    /** Get the front element. */
    int peek()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        int ans = s2.top();

        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }

    /** Returns whether the queue is empty. */
    bool isEmpty()
    {
        return (s1.empty());
    }
};

