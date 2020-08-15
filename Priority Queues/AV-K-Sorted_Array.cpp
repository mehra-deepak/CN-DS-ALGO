#include<iostream>
using namespace std;
#include<vector>
#include<queue>

void kthSortedArray(int arr[], int n, int k)
{
    vector<int> output;
    
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    for(int i=0;i<n;i++)
    {
        minheap.push(arr[i]);
        
        if(minheap.size()>k)
        {
            output.push_back(minheap.top());
            minheap.pop();
        }
    }
    
    while(!minheap.empty())
    {
        output.push_back(minheap.top());
        minheap.pop();
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
    
    
}
int main()
{
    int arr[]={6,5,3,2,8,10,9};
    
    int n=7;
    
    int k=4;
    
    kthSortedArray(arr, n, k);
}