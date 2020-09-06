#include <queue>

void reverseQueue(queue<int> &q) 
{
    if(q.empty())
        return;
    
    int data=q.front();
    q.pop();
    
    reverseQueue(q);
    
    q.push(data);
	

}