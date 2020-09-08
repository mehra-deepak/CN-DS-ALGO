#include<iostream>
#include<algorithm>
using namespace std;
int helper(int arr[], int n, int x)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==x)
    {
        return 0;
    }
    int smallAns = helper(arr+1, n-1, x);

    if(smallAns == -1)
    {
        return -1;
    }
    else
    {
        return 1+smallAns;
    }
}
int LastIndex(int arr[], int n , int x)
{
    reverse(arr,arr+n);

    int ans = helper(arr, n , x);

    if(ans==-1)
    {
        return -1;
    }
    return n-(ans+1);
}
int main()
{
    int arr[]= {1,2,1,3,1,4};

    int n= 6;

    int x;

    cin>>x;

    int ans = LastIndex(arr , n, x);

    cout<<ans;
}

