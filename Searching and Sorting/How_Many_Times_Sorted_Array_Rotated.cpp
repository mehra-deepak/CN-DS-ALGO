/*

Check Array Rotation

You have been given an integer array/list(ARR) of size N.
It has been sorted(in increasing order) and then rotated by some number 'K' in the clockwise direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

*/

#include<iostream>
#include<limits.h>
using namespace std;
int checkArrayRotation(int arr[], int n)
{
    int left =0 ;
    
    int right=n-1;
    
    while(left<=right)
    {
        int mid = left+ (right-left)/2;
        // no rotation
        if(arr[left]<arr[right])
        {
            return left;
        }
        
        int next = (mid+1)%n;
        
        int prev = (mid+n-1)%n;
        
        if(arr[mid]<=arr[next] && arr[mid]<=prev)
        {
            return mid;
        }
        else if(arr[mid]<=arr[right])
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    
    return -1;
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
    
    
    cout<<checkArrayRotation(arr, n);
}




































