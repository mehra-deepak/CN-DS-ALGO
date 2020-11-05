#include<iostream>
using namespace std;
int nthFibonacciNumberHelperFunction(int n, int *arr)
{
    // base conditon for recursion
    if(n<=1)
    {
        //instead of returning simply first i will have to save into my array
        arr[n] = n;

        return n;
    }

    // recursive calls according to recursion trees crux point is that dont blindly make recursive calls
    // first check if the array has the element correspondingly stored across it or not.
    if(arr[n-1]==0)
    {
        arr[n-1] = nthFibonacciNumberHelperFunction(n-1, arr);
    }

    if(arr[n-2]==0)
    {
        arr[n-2] = nthFibonacciNumberHelperFunction(n-2, arr);
    }

    arr[n] = arr[n-1] + arr[n-2];

    return arr[n];
}
int nthFibonacciNumber(int n)
{
    int *ansArray = new int[n+1];
    
    // initialise the array with zeros so as to keep the check on if the nth element is calculated earlier or not.
    for(int i=0;i<=n;i++)
    {
        ansArray[i]=0;
    }

    // pass the array as reference jis se inplace sab hota jae
    int ans = nthFibonacciNumberHelperFunction(n, ansArray);

    return ans;

}
int main()
{
    int n;

    cin>>n;

    int ans = nthFibonacciNumber(n);

    cout<<ans;
}