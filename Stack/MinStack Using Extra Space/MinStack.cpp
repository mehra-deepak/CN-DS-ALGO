#include<stack>
using namespace std;

class MinStack
{
public:
    MinStack()  // constructor
    {

    }
    stack<int> s;
    stack<int> ss;

    void push(int x)
    {
        s.push(x);
        if(ss.size()==0 || x<=ss.top())
        {
            ss.push(x);
        }
        return;
    }
    int pop()
    {
        if(s.size()==0)
        {
            return -1;
        }
        int ans = s.top();
        s.pop();
        if(ss.top()== ans)
        {
            ss.pop();
        }

        return ans;
    }
    int top()
    {
        return s.top();
    }
    int getMin()
    {
        if(ss.size()==0)
        {
            return -1;
        }
        return ss.top();
    }
};
