#include<iostream>
using namespace std;
int nthFibonacciNumberUsingDP(int n)
{

    int *ansArray = new int[n+1];
    
    ansArray[0] = 0;

    ansArray[1] = 1;

    for(int i=2;i<=n;i++)
    {
        ansArray[i] = ansArray[i-1] + ansArray[i-2];
    }

    return ansArray[n];

}
int main()
{
    int n;
    cin>>n;
    

    int ans = nthFibonacciNumberUsingDP(n);

    cout<<ans;
}