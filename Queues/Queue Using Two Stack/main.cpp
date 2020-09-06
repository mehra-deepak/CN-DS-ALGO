#include<iostream>
using namespace std;
#include "Queue_Using_Two_Stack.cpp"
int main()
{
    QueueUsingStack q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<q.peek()<<endl;

    cout<<q.pop()<<endl;

    cout<<q.peek()<<endl;

    cout<<q.isEmpty()<<endl;
}
