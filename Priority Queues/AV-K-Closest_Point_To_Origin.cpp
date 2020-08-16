#include<iostream>
using namespace std;
#include<queue>
const int m = 2; 
void kthClosestPointFromOrigin(int arr[][m],int n, int k)
{
    priority_queue<pair<int,pair<int,int>>> pq;
    
    for(int i=0;i<n;i++)
    {
        pq.push({arr[i][0]*arr[i][0]+ arr[i][1]* arr[i][1],{arr[i][0],arr[i][1]}});
        if(pq.size()>k)
        {
           pq.pop();
        }
    }
    while(pq.size()>0)
    {
        pair<int,int> p = pq.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        pq.pop();
    }
    
    
}
int main()
{
    
    int n;
    
    cin>>n;
    
    int arr[n][2];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int k=2;
    
    kthClosestPointFromOrigin(arr,n,k);
    
}
