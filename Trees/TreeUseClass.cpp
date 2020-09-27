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

int numOfNodes(TreeNode<int>* root)
{
    int ans =1;  // root k corresponding

    for(int i=0;i<root->children.size();i++)
    {
        ans += numOfNodes(root->children[i]);
    }

    return ans;
}

int sumOfNodes(TreeNode<int>* root)
{
    int sum = root->data;  // root k corresponding

    for(int i=0;i<root->children.size();i++)
    {
        sum +=sumOfNodes(root->children[i]);
    }

    return sum;
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
int main()
{
    TreeNode<int>* root = takeInputLevelWise();

    cout<<endl;

    printTreeLevelWise(root);

    cout<<endl;

    int count = numOfNodes(root);

    cout<<count;

    cout<<endl;

    int sum = sumOfNodes(root);

    cout<<"sum"<<sum;


}
