#include<iostream>
using namespace std;
void sortZeroOne(int arr[], int n)
{
    int i=0;
    
    int j=n-1;
    
    while(i<j)
    {
       while(i<j && arr[i]==0)
       {
           i++;
       }
       while(i<j && arr[j]==1)
       {
           j--;
       }
       if(arr[i]==1 && arr[j]==0)
       {
           swap(arr[i], arr[j]);
           i++;
           j--;
       }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
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
    sortZeroOne(arr,n);
}