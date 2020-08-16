#include<iostream>
using namespace std;
#include<queue>
int connectingRopes(int arr[], int n)
{
    priority_queue<int, vector<int>,greater<int>> pq;
    
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        
    }

    
    int sum=0;
    
    while(pq.size()>=2)
    {
        int num1=pq.top();
        
        pq.pop();
        
        int num2=pq.top();
        
        pq.pop();
        
        sum+=num1+num2;
        
        pq.push(num1+num2);
    }
    
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5};
    
    int n=5;
    
    cout<<connectingRopes(arr, n);
}