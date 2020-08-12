/*

Second Largest in array
Send Feedback
You have been given a random integer array/list(ARR) of size N. 
You are required to find and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)

*/

#include<iostream>
#include<limits.h>
using namespace std;
int secondSmallest(int arr[], int n)
{
    int largest= INT_MIN;
    int second=  INT_MIN;
    
    if(arr[0]>arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second= arr[0];
    }
    
    for(int i=2;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if( arr[i]< largest && arr[i]> second)
        {
            second = arr[i];
        }
        
    }
    
    
    return second;
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
    
    cout<<secondSmallest(arr, n);
}




































