#include<iostream>
#include "MinStack.cpp"
using namespace std;

int main()
{
    MinStack s;

    s.push(18);
    s.push(19);
    s.push(29);
    s.push(16);
    s.push(15);
    s.push(15);


    cout<<s.top()<<endl;

    cout<<s.getMin()<<endl;

    s.pop();

    cout<<s.getMin()<<endl;

    s.pop();

    cout<<s.getMin()<<endl;

    s.pop();

    cout<<s.getMin()<<endl;



}
