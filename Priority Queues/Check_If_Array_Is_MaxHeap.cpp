#include<iostream>
using namespace std;
#include<queue>
bool checkMaxHeap(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int leftChildIndex = 2*i+1;
        
        if(leftChildIndex< n && arr[leftChildIndex] > arr[i])
        {
            return false;
        }
        
        int rightChildIndex = 2*i+2;
        if(rightChildIndex<n && arr[rightChildIndex] > arr[i])
        {
            return false;
        }
    }
    
    return true;
}
int main()
{
    int arr[]={1,3,12,5,15,11};
    
    cout<<checkMaxHeap(arr,6);
    
}