#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                flag=1;
            }
            
        }
        
        if(flag==0)
        {
            return arr[i];
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
    
    cout<<findUnique(arr, n);
}