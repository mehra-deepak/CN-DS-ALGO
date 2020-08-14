/*


IN-BUILT Priority Queues.

Note 1 : Is present with the header file #include<queue>.

Note 2 : Is present inside 'priority_queue' class.

Note 3 : By Default it is present as Max Priority Queue.

FUNCTIONS PRESENT IN PRIORITY QUEUE STL.  

#  function we created ----------------  function in STL
1) isEmpty()           ----------------  empty()
2) getSize()           ----------------  size()
3) insert(element)     ----------------  push(element)
4) getMax()            ----------------  top()              <---> will give max as default beacuse max heap
5) removeMin()         ----------------  void pop()         <---> will not return anything, top ki help se pele store karna hoga


*/

#include<iostream>
using namespace std;
#include<queue>
int main()
{
    priority_queue<int> pq;
    
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
