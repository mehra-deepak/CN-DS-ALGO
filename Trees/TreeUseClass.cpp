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

int numofNodes(TreeNode<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int count=0;

    for(int i=0;i<root->children.size();i++)
    {
        count+= numofNodes(root->children[i]);
    }

    count+=1;

    return count;
}

int sumOfNodes(TreeNode<int>* root)
{

    if(root==NULL)
    {
        return 0;
    }

    int sum = 0;

    for(int i=0;i<root->children.size();i++)
    {
        sum+= sumOfNodes(root->children[i]);
    }
    sum+=root->data;

    return sum;



}

int nodesGreaterThanX(TreeNode<int> *root, int x)
{
    if(root==NULL)
    {
        return 0;
    }
    int count=0;

    if(root->data > x)
    {
        count++;
    }

    for(int i=0;i<root->children.size();i++)
    {
        count+= nodesGreaterThanX(root->children[i],x);

    }

    return count;
}
bool containsX(TreeNode<int>* root, int x)
{
    if(root==NULL)
    {
        return false;
    }

    if(root->data == x)
    {
        return true;
    }

    for(int i=0;i<root->children.size();i++)
    {
        bool ans = containsX(root->children[i],x);
        if(ans==true)
        {
            return true;
        }

    }
    return false;
}
int main()
{

    TreeNode<int>* root = takeInputLevelWise();

    printTreeLevelWise(root);

    int numNodes = numofNodes(root);

    cout<<numNodes;

    int sumNodes = sumOfNodes(root);

    cout<<endl;
    cout<<sumNodes;

    int x;
    cin>>x;


    bool ans = containsX(root,x);

    cout<<ans;

    int count = nodesGreaterThanX(root,x);

    cout<<count;

}
