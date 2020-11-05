#include<iostream>
using namespace std;
int nthFibonacciNumber(int n)
{
    //Base Case

    if(n<=1)
    {
        return n;
    }

    // Recursive Calls according to the Recursion Tree.

    int leftSmallNumber = nthFibonacciNumber(n-1);

    int rightSmallNumber = nthFibonacciNumber(n-2);

    int ans = leftSmallNumber + rightSmallNumber;

    return ans;
}
int main()
{
    int n;

    cin>>n;

    int ans = nthFibonacciNumber(n);

    cout<<ans;
}