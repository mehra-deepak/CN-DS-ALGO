#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void intersection(int arr[], int arr2[],int n, int m)
{
    unordered_map<int, int> umap;

    vector<int> vect;

    for(int i =0;i<n;i++)
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

    for(int i=0;i<m;i++)
    {
        if(umap.find(arr2[i])!= umap.end())
        {
            vect.push_back(arr2[i]);
            umap[arr[i]]--;
        }
        
    }


    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<endl;
    }
}
int main()
{
    int arr[]={2 ,6 ,1,2};

    int arr2[]= { 1,2,3,4,2};

    intersection(arr,arr2,4,5);
}