#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        
        if(flag==0)
        {
            break;
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
    
    bubbleSort(arr, n);
}
