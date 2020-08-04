// Swap Alternate

#include<iostream>
using namespace std;

void swapAlternative(int arr[], int n)
{
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    if(n%2==1)
    {
        for(int i=0;i<n-1;i+=2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10];
    
    int n;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    swapAlternative(arr, n);
}