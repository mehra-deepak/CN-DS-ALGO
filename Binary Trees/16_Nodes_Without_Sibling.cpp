void nodesWithoutSibling(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left!=NULL)
    {
        if(root->right==NULL)
        {
           cout<<root->left->data<<endl;
        }

    }
    if(root->right!=NULL)
    {
        if(root->left==NULL)
        {
            cout<<root->right->data<<endl;
        }
    }

    nodesWithoutSibling(root->left);
    nodesWithoutSibling(root->right);

}
