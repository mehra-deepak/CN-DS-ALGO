#include<iostream>
using namespace std;
void mergeSorted(int arr[], int brr[], int n, int m)
{

    int i=0,j=0,k=0;

    int crr[n+m];

    while(i < n && j< m)
    {
        if(arr[i]<brr[j])
        {
            crr[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            crr[k]=brr[j];
            k++;
            j++;
        }
    }

    while(i<n)
    {
        crr[k]=arr[i];
        k++;
        i++;
    }

    while(j<m)
    {
        crr[k]=brr[j];
        k++;
        j++;
    }

    for(int i=0;i<m+n;i++)
    {
        cout<<crr[i]<<" ";
    }

}
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;

    int arr[10];

    int brr[10];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<m;j++)
    {
        cin>>brr[j];
    }

    mergeSorted(arr, brr, n , m);
}
