#include<iostream>
#include<vector>
using namespace std;

void findIntersection(int arr[], int brr[], int n, int m)
{
    vector<int> vect;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==brr[j])
            {
                vect.push_back(brr[j]);
                brr[j]=-1;
                
            }
        }
    }
    
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
}
int main()
{
    int n,m;
    
    cin>>n>>m;
    
    int arr[10];
    
    int brr[10];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    
    findIntersection(arr,brr,n,m);
}
