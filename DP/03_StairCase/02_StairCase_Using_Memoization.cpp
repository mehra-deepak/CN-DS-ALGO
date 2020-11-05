#include<iostream>
using namespace std;
int dp[1000];

int stairCase(int n)
{
    // base Case

    if(n<=1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }

    // DP element check
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int a = stairCase(n-1);
    int b = stairCase(n-2);
    int c = stairCase(n-3);

    dp[n] = a+b+c;

    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    // intialise the dp with -1s

    for(int i=0;i<1000;i++)
    {
        dp[i] =-1;
    }

    int answer = stairCase(n);

    cout<<answer;
}