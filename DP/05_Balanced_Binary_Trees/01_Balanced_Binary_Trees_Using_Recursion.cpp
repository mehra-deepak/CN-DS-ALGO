#include<iostream>
using namespace std;
#include<cmath>
int balancedBts(int h)
{
    if(h<=1)
    {
        return 1;
    }

    int mod = (int)(pow(10,9)) +7;

    int x = balancedBts(h-1);
    int y = balancedBts(h-2);


    int temp1 = (int)(((long)(x)*x) % mod);

    int temp2 = (int)((2*(long)(x)*y)%mod);

    int ans = (temp1 + temp2)% mod;

    return ans;

    


}
int main()
{
    int h;
    cin>>h;
    cout<< balancedBts(h)<<endl;
}