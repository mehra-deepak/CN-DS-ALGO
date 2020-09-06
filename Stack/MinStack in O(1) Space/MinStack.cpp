#include<stack>
#include<climits>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */

    int minElement= INT_MIN;

    stack<int> s;

    MinStack()
    {

    }

    void push(int x)
    {
        if(s.size()==0)
        {
            s.push(x);
            minElement = x;
        }
        else
        {
            if(x>=minElement)
            {
                s.push(x);
            }
            else if(x < minElement)
            {
                s.push(2*x - minElement);
                minElement = x;
            }
        }
    }

    void pop()
    {
        if(s.size()==0)
            return;
        else
        {
            if(s.top()>=minElement)
                s.pop();
            else if(s.top()<minElement)
            {
                minElement = 2* minElement -s.top();
                s.pop();
            }
        }
    }

    int top()
    {
        if(s.size()==0)
            return -1;
        else
        {
            if(s.top()>=minElement)
                return s.top();
            else if(s.top()<minElement)
            {
                return minElement;
            }
        }
        return -1;
    }

    int getMin()
    {
        if(s.size()==0)
        {
            return -1;
        }

        return minElement;

    }
};
