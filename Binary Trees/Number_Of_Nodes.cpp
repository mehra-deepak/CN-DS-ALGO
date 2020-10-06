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
