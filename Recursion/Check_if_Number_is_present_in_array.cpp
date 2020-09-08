#include<iostream>
using namespace std;
bool checkArray(int arr[], int n, int x)
{
    if(n<=0)
    {
        return false;
    }

    if(arr[0]==x)
    {
        return true;
    }
    bool ans = checkArray(arr+1, n-1,x);
    return ans;

}
int main()
{
    int arr[]= {1,2,3,4,5,6};

    int n= 6;

    int x;

    cin>>x;

    bool ans = checkArray(arr , n, x);

    cout<<ans;
}
