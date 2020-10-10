void depthk(BinaryTreeNode<int>* root,int k)
{
    if(k<0 || root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<endl;
    }
    depthk(root->left, k-1);
    depthk(root->right, k-1);
}
int print(BinaryTreeNode<int> *root, int node, int k)
{
    if(root == NULL)
    {
        return -1;
    }

    if(root->data == node)
    {
        depthk(root, k);
        return 0;
    }

    int leftdistance = print(root->left, node, k);

    if(leftdistance != -1)
    {
        if(leftdistance+1==k)
        {
            cout<<root->data<<endl;
            return k;
        }

        int dis_from_root = leftdistance+1;
        // ab hame right mai root se jana hai k-dis_from_root-1
        depthk(root->right, k-dis_from_root-1);
        return dis_from_root;
    }

    int rightdistance = print(root->right, node, k);

    if(rightdistance != -1)
    {
        if(rightdistance+1 == k)
        {
            cout<<root->data<<endl;
            return k;
        }
        int dis_from_root = rightdistance+1;
        depthk(root->left, k-dis_from_root-1);
        return dis_from_root;
    }
    return -1;
}


void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{

    int p = print(root,node, k);
}


