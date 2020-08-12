/*
Rotate array
You have been given a random integer array/list(ARR) of size N. 
Write a function that rotates the given array/list by D elements(towards the left).
*/

#include<iostream>
using namespace std;

void rotateByD(int arr[], int n, int d)
{
    for(int i=0;i<d;i++)
    {
        int temp = arr[0];
        
        for(int j=0;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
        
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
    
    int d;
    
    cin>>d;
    rotateByD(arr, n, d);
}




































