#include<iostream>
using namespace std;
#include<cmath>
int balancedBts(int h)
{
    int *dp = new int[h+1];

    dp[1]=1;

    dp[2]=3;


    
    int mod = (int)(pow(10,9))+7;
    
    for(int i=3;i<=h;i++)
    {
        long x = dp[i-1];
        long y = dp[i-2];

        long temp1 = x*x % mod;

        long temp2 = 2*x*y % mod;

        long ans = (temp1 + temp2)% mod;
        
        dp[i] = (int)(ans);
    }


    int result = dp[h];
    return result;
}
int main()
{
    int h;
    cin>>h;

    cout<<balancedBts(h);
}