/*

Nearest Smallest to Left


*/



#include<iostream>
using namespace std;
#include<stack>
#include<vector>
void nearestSmallestToRight(int arr[], int n)
{
    vector<int> v;
    
    stack<int> s;
    
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while(s.size()>0 && s.top()>=arr[i])
            {
                s.pop();
            }
            
            if(s.size()==0 )
            {
                v.push_back(-1);
            }
            else
            {
               v.push_back(s.top());
            }
        }
        
        
        s.push(arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    // Reverse the stack
    
    
    
}
int main()
{
    int arr[]={4,5,2,10,8};
    
    int n=5;
    
    nearestSmallestToRight(arr, n);
    

}