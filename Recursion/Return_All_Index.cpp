#include<iostream>
using namespace std;
void findIndex(int input[], int currentIndex, int n, int x, int output[], int &k)
{
    if(currentIndex == n)
    {
        return ;
    }
    if(input[currentIndex]==x)
    {
        output[k]=currentIndex;
        k++;
    }

    findIndex(input,currentIndex+1,n,x,output,k);

}
int allIndex(int arr[], int n, int x, int output[])
{
    int k=0;

    findIndex(arr, 0 , n, x, output,k);
    return k;

}
int main()
{
    int output[10];

    int arr[]={5,6,5,4,0,6};

    int n=6;

    int x=6;

    int ans = allIndex(arr, n, x,output);

    cout<<ans;
}
