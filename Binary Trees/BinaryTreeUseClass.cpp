#include<iostream>
#include<queue>
#include "BinaryTreeClass.cpp"
using namespace std;

void printTree(BinaryTreeNode<int>* root)
{
    // Base Case is Must in Binary Trees
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL)
    {
        cout<<"R"<<root->right->data;
    }

    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

// bekar function
BinaryTreeNode<int>* takeInput()
{
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
}


// take input Level Wise --> Using Queues

BinaryTreeNode<int>* takeInputLevelWise()
{
    int rootData;
    cout<<"Enter Root Data"<<endl;
    cin>>rootData;
    if(rootData==-1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty())
    {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter Left Child of "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout<<"Enter Right Child of "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right= child;
            pendingNodes.push(child);
        }


    }
    return root;

}

void printLevelWise(BinaryTreeNode<int> *root)
{

        queue<BinaryTreeNode<int>*> pendingNodes;
        pendingNodes.push(root);
        while(pendingNodes.size()!=0)
		{
            BinaryTreeNode<int>* front=pendingNodes.front();

            cout<<front->data<<":";
            pendingNodes.pop();


            if(front->left!=NULL)
            {
                cout<<"L:"<<front->left->data<<",";
                pendingNodes.push(front->left);
            }
            else
            {
                cout<<"L:-1,";
            }
          if(front->right!=NULL)
            {
                cout<<"R:"<<front->right->data;
                pendingNodes.push(front->right);
            }
            else
            {
                cout<<"R:-1";
            }
            cout<<endl;
        }

}

int numOfNodes(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int smallLeft = numOfNodes(root->left);

    int smallRight = numOfNodes(root->right);

    return 1+ smallLeft + smallRight;



}
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();

    printLevelWise(root);

    cout<<endl;

    cout<<numOfNodes(root);

    delete(root);
}
