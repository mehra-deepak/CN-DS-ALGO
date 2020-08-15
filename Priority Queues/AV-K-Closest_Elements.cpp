#include<iostream>
using namespace std;
#include<vector>
#include<queue>

void kclosestElement(int arr[], int n, int k, int x)
{
    priority_queue<pair<int, int>> p;
    
    for(int i=0;i<n;i++)
    {
        p.push({abs(arr[i]-x), arr[i]});
        
        if(p.size()>k)
        {
            p.pop();
        }
    }
    
    while(!p.empty())
    {
        
        cout<<p.top().second<<" ";
        p.pop();
    }
    
}
int main()
{
    int arr[]={5,6,7,8,9};
    
    int n=5;
    
    int k=3;
    
    int x=7;
    
    kclosestElement(arr, n, k, x);
}