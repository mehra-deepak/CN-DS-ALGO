#include<iostream>
using namespace std;

#include<cmath>

int mod = pow(10,9) + 7;

int balancedBTsHelper(int h, int *dp)
{
    //base case
    if(h<=1)
    {
        return 1;
    }

    if(dp[h]!=-1)
    {
        return dp[h];
    }

    long x = balancedBTsHelper(h-1,dp);
    long y = balancedBTsHelper(h-2,dp);

    long temp1 = (x*x)% mod;

    long temp2 = (2*x*y) % mod;

    long ans = (temp1 + temp2)% mod;

    dp[h] = (int)(ans);

    return dp[h];
}

int balancedBTs(int h)
{
    int *dp = new int[h+1];

    for(int i=0;i<=h;i++)
    {
        dp[i]= -1;
    }
    
    int answer = balancedBTsHelper(h, dp);

    return answer;
   
}
int main()
{
    int h;
    cin>>h;

    cout<<balancedBTs(h);
}