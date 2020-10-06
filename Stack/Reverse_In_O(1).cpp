#include<iostream>
using namespace std;
#include<stack>
void insertInStack(stack<int> &input, int val)
{
    if(input.empty())
    {
        input.push(val);
    }
    else
    {
        int temp = input.top();
        input.pop();
        insertInStack(input,val);
        input.push(temp);
    }
}
stack<int> reverseStack(stack<int> input)
{


    if(input.empty())
    {
        return input;
    }
    else
    {
        int val = input.top();
        input.pop();
        reverseStack(input);
        insertInStack(input, val);

    }

    return input;
}
int main()
{
    stack<int> input;

    input.push(6);
    input.push(4);
    input.push(3);
    input.push(9);


    stack<int> inputt = reverseStack(input);

    while(!inputt.empty())
    {
        int temp = inputt.top();
        cout<<temp;
        inputt.pop();
    }




}
