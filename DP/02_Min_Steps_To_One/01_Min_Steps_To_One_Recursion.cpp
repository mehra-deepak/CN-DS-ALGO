#include<iostream>
using namespace std;
#include<climits>
int minSteps(int n)
{
    int b,c = INT_MAX;


    if(n==1)
    {
        return 0;
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

    return min(a,min(b,c))+1;
}
int main()
{
    int n;

    cin>>n;

    int steps = minSteps(n);
    cout<<steps;
}