#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int maxOccurance(int arr[], int n)
{
    unordered_map<int, int> umap;

    for(int i=0;i<n;i++)
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

    int max = INT_MIN;
    int ans = INT_MIN;

    for(auto i = umap.begin();i!=umap.end();i++)
    {
        if(max < i->second)
        {
            max = i->second;
            ans = i->first;
        }
    }

    return ans;


}
int main()
{
    int arr[]={2,12,2,11,12,2,1,2,2,11,12,2,6};

    int n=13;

    int ans = maxOccurance(arr, n);

    cout<<ans;

}