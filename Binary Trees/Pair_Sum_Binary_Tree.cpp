#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> arr;

void helper(BinaryTreeNode<int> *root, int sum)
{
    if(root == NULL)
    {
        return;
    }
    helper(root->left,sum);
    helper(root->right,sum);
    arr.push_back(root->data);

}

void nodesSumToS(BinaryTreeNode<int> *root, int sum)
{
    helper(root,sum);

    sort(arr.begin(), arr.end());

    int i = 0;
    int j = arr.size() - 1;


    while(i<=j)
    {
        if(arr[i]+arr[j] == sum)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        if(arr[i]+arr[j] > sum)
        {
            j--;
        }
        if(arr[i]+arr[j] < sum)
        {
            i++;
        }
    }

}
