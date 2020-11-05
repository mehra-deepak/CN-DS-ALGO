#include<iostream>
using namespace std;
int stairCase(int n)
{
    int *dp = new int[n+1];

    dp[1] = 1;

    dp[2] = 2;

    dp[3] = 4;

    int a,b,c =0;

    for(int i=4;i<=n;i++)
    {

        int a = dp[i-1];
        int b = dp[i-2];
        int c = dp[i-3];

        dp[i] = a+b+c;
    }

    int result  = dp[n];
    return result;

}
int main()
{
    int n;
    cin>>n;

    int answer = stairCase(n);
    cout<<answer;
}