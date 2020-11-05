#include<iostream>
#include<unordered_map>
using namespace std;
void elementCount(int arr[], int n)
{
    unordered_map<int,int> umap;

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

    for(auto i = umap.begin();i!=umap.end();i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }

    int totalCount =0;

    for(auto i = umap.begin();i!=umap.end();i++)
    {
        totalCount+= i->second;
    }
    cout<<totalCount;

}
int main()
{
    int arr[] = {8,7,5,6,7,8,9,10,5,6};

    int n = 10;

    elementCount(arr, n);

    
}