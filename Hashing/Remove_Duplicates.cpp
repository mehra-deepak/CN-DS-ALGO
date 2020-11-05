#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void remove_duplicates(int arr[],int n)
{
    vector<int> single;
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
    for(auto i=umap.begin();i!=umap.end();i++)
    {
        if(i->second==1)
        {
            cout<<i->first<<endl;
        }
    }


}
int main()
{
    int arr[50]= {1,2,3,4,5,7,12,3,2,11,31,4,1,3,4,6,20};

    int n= 17;

    remove_duplicates(arr,n);
}
