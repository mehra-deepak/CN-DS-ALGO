#include<iostream>
using namespace std;
#include<unordered_map>
int firstNonRepeatingElement(int arr[], int n)
{
    unordered_map<int,int> umap;

    for(int i=0;i<n;i++)               // O(n)
    {
        if(umap.count(arr[i])==0)
        {
            umap[arr[i]]=1;
        }
        else
        {
            umap[arr[i]]++;
        }
    }

    for(int i=0;i<n;i++)                //O(n)
    {

        if(umap[arr[i]]==1)
        {
            return arr[i];
        }
    }

    return -1;
}

int main()
{
    int n =10 ;
    int arr[] = {1,1,2,2,3,3,4,5,6,7};

    int val = firstNonRepeatingElement(arr, n);

    cout<<val;


}
