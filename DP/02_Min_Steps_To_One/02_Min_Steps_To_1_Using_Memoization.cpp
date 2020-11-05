#include<iostream>
using namespace std;
#include<climits>
int minStepsHelper(int n, int *ans)
{
    if(n==1)
    {
        ans[n] = 0;
        return 0;
    }

    if(ans[n-1]==-1)
    {
        ans[n-1] = minStepsHelper(n-1,ans);
    }

    int y = INT_MAX;
    int z = INT_MAX;

    if(n%2==0)
    {
        if(ans[n/2]==-1)
        {
            ans[n/2] = minStepsHelper(n/2, ans);
        }
        y = ans[n/2];
    }
    if(n%3==0)
    {
        if(ans[n/3]==-1)
        {
            ans[n/3] = minStepsHelper(n/3, ans);
        }
        z = ans[n/3];
    }

    ans[n] = 1+ min(ans[n-1], min(y,z));

    return ans[n];

}
int minSteps(int n)
{
    int *ans= new int[n+1];

    for(int i=0;i<=n;i++)
    {
        ans[i]=-1;
    }

    int answer = minStepsHelper(n, ans);

    return answer;

}
int main()
{
    int n;
    cin>>n;
    int steps = minSteps(n);

    cout<<steps;
}


// Easy Solution 

#include<iostream>
using namespace std;
#include<climits>

int dp[1000];

int minSteps(int n)
{
    int b,c = INT_MAX;


    if(n==1)
    {
        return 0;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    int a = minSteps(n-1);

    if(n%2==0)
    {
        b = minSteps(n/2);
    }

    if(n%3==0)
    {
        c = minSteps(n/3);
    }

    dp[n]= min(a,min(b,c))+1;
    return dp[n];
}
int main()
{
    int n;

    cin>>n;

    for(int i=0;i<1000;i++)
    {
        dp[i]=-1;
    }

    int steps = minSteps(n);
    cout<<steps;
}