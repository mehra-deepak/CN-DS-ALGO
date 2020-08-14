#include<iostream>
using namespace std;
#include<queue>

void kLargestElements(int input[], int n, int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<k;i++)
    {
        pq.push(input[i]);
    }
    
    for(int i=k;i<n;i++)
    {
        if(input[i] > pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
    }
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main()
{
    int input[] = {5,6,9,12,3,13,2};
    int k=3;
    kLargestElements(input,7,k);
    
}