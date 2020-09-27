#include<iostream>
#include"TreeNode.h"
using namespace std;
#include<queue>
TreeNode<int>* takeInputLevelWise()
{
    int rootData;

    cout<<"Enter Root Data:";
    cin>>rootData;

    TreeNode<int>* root= new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        cout<<"Enter the number of children for "<<front->data<<":";
        int numChild;
        cin>>numChild;

        for(int i=1;i<=numChild;i++)
        {
            cout<<"Enter the "<<i<<"th child:";
            int child;
            cin>>child;
            TreeNode<int>* newNode = new TreeNode<int>(child);

            front->children.push_back(newNode);

            pendingNodes.push(newNode);
        }
    }

    return root;
}
