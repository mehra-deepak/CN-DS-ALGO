#include<iostream>
using namespace std;
int findDigits(int n)
{
    if(n<10)
    {
        return 1;
    }

    int smallans = findDigits(n/10);
    return smallans+1;
}
int main()
{

    int n;
    cin>>n;

    int ans = findDigits(n);
    cout<<ans;
}
