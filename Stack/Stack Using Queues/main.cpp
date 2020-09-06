#include<iostream>
#include "StackUsingQueues.cpp"
using namespace std;
int main()
{
    MyStack s;


    s.push(2);

    s.push(3);

    s.push(4);

    s.push(5);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;

    cout<<s.top()<<endl;

    cout<<s.isEmpty()<<endl;



}
