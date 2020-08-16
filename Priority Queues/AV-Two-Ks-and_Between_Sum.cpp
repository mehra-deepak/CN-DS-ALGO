#include<iostream>
using namespace std;
#include<queue>
int kthSmallestElementSum(int arr[], int n, int k)
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
    int arr[]={1,3,12,5,15,11};
    
    int n=6;
    
    int k1=3;
    
    int k2 =6;
    
    int first = kthSmallestElementSum(arr, n, k1);
    
    int second = kthSmallestElementSum(arr, n, k2);
    
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
       if(arr[i]> first && arr[i] < second)
       {
           sum+=arr[i];
       }
    }
    
    cout<<sum;
    
}