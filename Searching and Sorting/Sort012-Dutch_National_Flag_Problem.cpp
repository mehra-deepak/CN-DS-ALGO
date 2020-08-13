/*

Sort 0 1 2

You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s.
Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words,
you will be visiting each element in the array/list just once.

*/

#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int i = 0;
    
    int nextzero = 0;
    
    int nexttwo = n-1;
    
    
    while(i < nexttwo)
    {
        if(arr[i]==0)
        {
            swap(arr[i], arr[nextzero]);
            i++;
            nextzero++;
        }
        
        else if (arr[i]==2)
        {
            swap(arr[i],arr[nexttwo]);
            nexttwo--;
        }
        
        else
        {
            i++;
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
    
    sort012(arr, n);
    
}