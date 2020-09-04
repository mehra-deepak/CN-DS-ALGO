#include <bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
vector<int> nearestSmallerRight(int arr[], int n)
{
    stack<pair<int, int>> s;

    vector<int> v;

    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while( s.size()>0 && s.top().first>=arr[i] )
            {
                s.pop();
            }
            if(s.size()==0)
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

    reverse(v.begin(), v.end());

    return v;
}

vector<int> nearestSmallerLeft(int arr[], int n)
{
    stack<pair<int, int>> s;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<arr[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while( s.size()>0 && s.top().first>=arr[i] )
            {
                s.pop();
            }
            if(s.size()==0)
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


    return v;
}
int main()
{

    int arr[7] = {6,2,5,4,5,1,6};

    int n=7;

    vector<int> NSR = nearestSmallerRight(arr, n);

    vector<int> NSL = nearestSmallerLeft(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<NSL[i]<<" ";
    }

    cout<<endl;


    for(int i=0;i<n;i++)
    {
        cout<<NSR[i]<<" ";
    }


    cout<<endl;

    vector<int> vect;

    for(int i=0;i<n;i++)
    {
        vect.push_back((NSR[i] - NSL[i] -1)*arr[i]);
    }

    for(int i=0;i<n;i++)
    {

        cout<<vect[i]<<" ";
    }

    int maxi =INT_MIN;

    for(int i=0;i<n;i++)
    {
        maxi = max(maxi,vect[i]);
    }

    cout<<endl;

    cout<<maxi;



}
