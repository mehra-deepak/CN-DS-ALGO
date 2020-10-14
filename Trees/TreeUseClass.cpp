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
    cout<<endl;

    return root;
}


void printTreeLevelWise(TreeNode<int>* root)
{

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        TreeNode<int>* front = pendingNodes.front();

        pendingNodes.pop();

        cout<<front->data<<":";

        for(int i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data<<",";

            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }

}
void secondLargest(TreeNode<int> * root, TreeNode<int> **first , TreeNode<int> **second)
{

    if(*first==NULL){
        *first=root;
    }

    else if((*first)->data<root->data){
        *second=*first;
        *first=root;
    }
    else if((*second==NULL)|| ((*first)->data)>(root->data)&&((*second)->data)<(root->data)){
        *second=root;
    }

    for(int i=0;i<root->children.size();i++)
    {
        secondLargest(root->children[i],first,second);
    }

}


TreeNode <int>* secondLargest(TreeNode<int> *root)
{
    TreeNode<int>*first=NULL;
    TreeNode<int>*second=NULL;

    secondLargest(root,&first,&second);

    return second;
}

int main()
{
    TreeNode<int>* root = takeInputLevelWise();

    printTreeLevelWise(root);

    TreeNode<int>* node = secondLargest(root);

    cout<<node->data;

}

