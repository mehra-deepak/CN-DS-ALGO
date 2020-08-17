/*
Nearest Greater To Left

*/



#include<iostream>
using namespace std;
#include<stack>
#include<vector>
void nearestGreaterToLeft(int arr[], int n)
{
    vector<int> v;
    
    stack<pair<int,int>> s;
    
    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i])
        {
            while(s.size()>0 && s.top().first<=arr[i])
            {
                s.pop();
            }
            
            if(s.size()==0 )
            {
                v.push_back(-1);
            }
            else
            {
               v.push_back(s.top().second);
            }
        }
        
        
        s.push({arr[i],i});
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<i-v[i]<<" ";
    }
    
    
}
int main()
{
    int arr[]={100,80,60,70,60,75,85};
    
    int n=7;
    
    nearestGreaterToLeft(arr, n);
    

}