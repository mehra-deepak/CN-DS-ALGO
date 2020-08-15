#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<unordered_map>
void kfrequentElements(int arr[], int n, int k)
{
    unordered_map<int, int> umap;
    
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]++;
    }
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(auto i=umap.begin();i!=umap.end();i++)
    {
        pq.push({i->second,i->first});
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    
    while(!pq.empty())
    {
        cout<<pq.top().second<<" ";
        
        pq.pop();
    }
    
}
int main()
{
    int arr[]={5,5,5,5,6,6,6,7,8,9};
    
    int n=10;
    
    int k=2;
    
    kfrequentElements(arr, n, k);
}