#include<iostream>
using namespace std;
int pairSum(int arr[], int n, int x)
{
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    count++;
                }
            }
        }
    }
    
    return count;
    
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
    
    cout<<pairSum(arr, n, x);
}