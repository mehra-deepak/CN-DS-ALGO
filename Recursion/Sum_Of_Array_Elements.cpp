#include<iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    if(n<=0)
    {
        return 0;
    }

    int smallSum = arr[0] + sumArray(arr+1, n-1);
    return smallSum;

}
int main()
{
    int arr[]= {1,2,3,4,5,6};

    int n= 6;

    int ans = sumArray(arr , n);

    cout<<ans;
}
