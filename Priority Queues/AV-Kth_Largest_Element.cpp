#include<iostream>
using namespace std;
#include<queue>

int kthlargest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    for(int i=0;i<n;i++)
    {
        minheap.push(arr[i]);
        
        if(minheap.size()>k)
        {
            minheap.pop();
        }
    }
    
    
    return minheap.top();
    
    
}
int main()
{
    int arr[]={12, 7 , 8 , 4 , 5, 2, 3};
    
    int n=7;
    
    int k=3;
    
    cout<<kthlargest(arr, n, k);
}