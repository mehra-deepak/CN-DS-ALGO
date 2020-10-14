int countNodes(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return 1+ leftCount+ rightCount;
}
