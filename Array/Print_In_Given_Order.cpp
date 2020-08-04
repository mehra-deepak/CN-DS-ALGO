
// Print in the given order

/*

Sample Input 1 :
1
6
Sample Output 1 :
1 3 5 6 4 2

*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> arrange_arrays(int n)
{
    vector<int> vect;
    int i=1;
    while(i<=n)
    {
        if(i%2==1)
        {
            vect.push_back(i);   
        }
        i++;
    }
    
    i=n;
    
    while(i>0)
    {
        if(i%2==0)
        {
            vect.push_back(i);
        }
        i--;
    }
    
    return vect;
}

int main()
{
    int n;
    
    cin>>n;
    
    vector<int> v=arrange_arrays(n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}