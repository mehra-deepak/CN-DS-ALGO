#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]= temp;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    
    cin>>n;
    
    int arr[10];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    insertionSort(arr , n);
}