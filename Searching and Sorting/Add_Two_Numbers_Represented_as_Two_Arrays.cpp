#include<iostream>
using namespace std;
void sumArray(int arr[], int brr[], int n, int m)
{
    int k=max(m,n);  // k is the current index of output array
    
    int output[k];
    
    int i=n-1;
    
    int j=m-1;
    
    int carry=0;
    
    while(i>=0 && j>=0)
    {
        int sum= arr[i]+brr[j]+carry;
        output[k]=sum%10;
        carry=sum/10;
        i--;
        j--;
        k--;
    }
    
    while(i>=0)
    {
        int sum = arr[i]+carry;
        output[k]=sum%10;
        carry=sum/10;
        i--;
        k--;
        
    }
    
    while(j>=0)
    {
        int sum = brr[j]+carry;
        output[k]=sum%10;
        carry=sum/10;
        j--;
        k--;
        
    }
    
    output[0]=carry;
    
    int len = max(n,m);
    
    for(int i=0;i<=len;i++)
    {
        cout<<output[i];
    }
    
    
}
int main()
{
    int arr[10];
    
    int brr[10];
    
    int n;
    
    int m;
    
    cin>>m;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    
    sumArray(arr, brr, n, m);
}