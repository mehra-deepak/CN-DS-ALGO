#include<iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if(n==0 || n ==1) // size of array becomes one
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }

    bool smallans = isSorted(arr+1, n-1);
    return smallans;
}
int main()
{
    int arr[]= {1,2,3,4,5,6};

    int n= 6;

    bool ans = isSorted(arr , n);

    cout<<ans;
}
