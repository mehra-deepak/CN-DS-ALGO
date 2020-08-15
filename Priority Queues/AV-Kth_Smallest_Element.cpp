#include<iostream>
using namespace std;
#include<queue>

int kthsmallest(int arr[], int n, int k)
{
    priority_queue<int> maxheap;
    
    for(int i=0;i<n;i++)
    {
        maxheap.push(arr[i]);
        
        if(maxheap.size()>k)
        {
            maxheap.pop();
        }
    }
    
    
    return maxheap.top();
    
    
}
int main()
{
    int arr[]={12, 7 , 8 , 4 , 5, 2, 3};
    
    int n=7;
    
    int k=3;
    
    cout<<kthsmallest(arr, n, k);
}