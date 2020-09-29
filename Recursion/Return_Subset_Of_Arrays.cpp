
#include<bits/stdc++.h>
using namespace std;

void subsetToSumK(vector<int>v, int index, int sum, vector<int>temp, vector<vector<int>> &ans )
{
    if(v.size()==index)
    {
        if(sum==0)
        {
            ans.push_back(temp);
        }
        return;
    }

    subsetToSumK(v, index+1, sum, temp, ans);
    temp.push_back(v[index]);
    subsetToSumK(v, index+1, sum-v[index], temp, ans);
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>v(n);

    subsetToSumK(v,0,k,temp,ans);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
