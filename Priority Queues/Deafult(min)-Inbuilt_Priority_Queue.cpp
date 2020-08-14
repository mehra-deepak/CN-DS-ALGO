#include<iostream>
using namespace std;
#include<queue>
int main()
{
    /*
        int          ---> specifies the datatype in PQ 
        
        vector<int>  ---> specifies the container because we know ki hamne PQ banane k lie vector 
                          container use kia jiska data type int hai
                       
                          (container yaha isleye specify kare kyuki default mai use pata hai kaise
                          implement kia but yaha it needs specification)
        
        greater<int> ---> is like comparator which specifies swapping when parent > child, which is 
                          the case for Min Heap.
    
    */
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(16);
    pq.push(1);
    pq.push(167);
    pq.push(7);
    pq.push(45);
    pq.push(32);
    
    cout<<"Size : "<<pq.size()<<endl;
    
    cout<<"Top : "<<pq.top()<<endl;
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}