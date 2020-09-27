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

void printTree(TreeNode<int>* root)
{
    cout<<root->data<<":";

    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int>* root = takeInputLevelWise();

    printTree(root);

}