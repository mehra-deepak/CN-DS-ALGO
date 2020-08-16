#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
void frequencySort(int arr[], int n)
{
    unordered_map<int, int> umap;
    vector<int> vect;
    
    for(int i=0;i<n;i++)
    {
        umap[arr[i]]++;
    }
    
    priority_queue<pair<int,int>> pq;
    
    for(auto i=umap.begin();i!= umap.end();i++)
    {
        pq.push({i->second,i->first});
    }
    
    while(pq.size()>0)
    {
        int frequency = pq.top().first;
        int element = pq.top().second;
        for(int i=0;i<frequency;i++)
        {
            vect.push_back(element);
        }
        
        pq.pop();
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    
    
}
int main()
{
    int arr[]={1,1,3,2,1,2,3,2,1};
    
    int n=9;
    
    frequencySort(arr, n);
}