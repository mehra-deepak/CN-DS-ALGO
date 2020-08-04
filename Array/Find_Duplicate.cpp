#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
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
    
    cout<<findDuplicate(arr, n);
}