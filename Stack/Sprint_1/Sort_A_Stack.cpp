#include<iostream>
using namespace std;
#include<stack>

void sortAStack(stack<int> &input, stack<int> &extra)
{
    // base case for recursion
    if(input.size()==0)
    {
        return;
    }

    // recursive call

    int x = input.top();

    input.pop();

    sortAStack(input, extra);
    while(input.size()!=0)
    {
        extra.push(input.top());
        input.pop();
    }

    while(extra.size()!=0 && x<extra.top() )
    {
        input.push(extra.top());
        extra.pop();
    }

    extra.push(x);

    while(extra.size()!=0)
    {
        input.push(extra.top());
        extra.pop();
    }



}
int main()
{
    stack<int> input, extra;

    input.push(4);
    input.push(5);
    input.push(6);
    input.push(3);
    input.push(2);
    input.push(1);
    input.push(10);
    input.push(8);
    input.push(9);
    input.push(2);


    sortAStack(input,extra);

    while(input.size()!=0)
    {
        cout<<input.top()<<" ";
        input.pop();
    }




}
