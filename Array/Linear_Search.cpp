#include<iostream>
using namespace std;

int arraySum(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
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
    
    int x;
    
    cin>>x;
    
    cout<<arraySum(arr,n,x);
}