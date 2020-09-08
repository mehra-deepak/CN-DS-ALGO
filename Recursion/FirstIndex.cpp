#include<iostream>
using namespace std;
int firstIndex(int arr[], int n , int x)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==x)
    {
        return 0;
    }
    int smallAns = firstIndex(arr+1, n-1, x);

    if(smallAns == -1)
    {
        return -1;
    }
    else
    {
        return 1+smallAns;
    }
}
int main()
{
    int arr[]= {1,2,1,3,1,4};

    int n= 6;

    int x;

    cin>>x;

    int ans = firstIndex(arr , n, x);

    cout<<ans;
}

