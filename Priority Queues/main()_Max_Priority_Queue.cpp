#include<iostream>
using namespace std;
#include "MaxPriorityQueue.h"
int main()
{
    PriorityQueues p;
    p.insert(24);
    p.insert(45);
    p.insert(90);
    p.insert(12);
    p.insert(23);
    p.insert(32);
    p.insert(21);
    p.insert(10);
    
    cout<<p.getSize()<<endl;
    
    cout<<p.getMax()<<endl;
    
    while(!p.isEmpty())
    {
        cout<<p.removeMax()<<" ";
    }
    cout<<endl;
}