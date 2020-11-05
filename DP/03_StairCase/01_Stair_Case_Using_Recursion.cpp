#include<iostream>
using namespace std;
int stairCase(int n)
{
    if(n<=1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }

    int a = stairCase(n-1);
    int b = stairCase(n-2);
    int c = stairCase(n-3);

  
    return a+b+c;

}
int main()
{
    int n;
    cin>>n;

    int totalWays = stairCase(n);
  
    cout<<totalWays;
}