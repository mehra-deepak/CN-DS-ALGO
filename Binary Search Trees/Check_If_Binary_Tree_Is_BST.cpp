bool isBSTHelper(BinaryTreeNode<int>* root, int min, int max)
{
    if(root == NULL)
    {
        return true;
    }

    if(root->data < min || root->data >max)
    {
        return false;
    }

    bool isLeftOK = isBSTHelper(root->left, min , root->data-1);
    bool isrightOK = isBSTHelper(root->right, root->data, max);

    return isLeftOK && isrightOK;
}
bool isBST(BinaryTreeNode<int>* root)
{
    bool ans = isBSTHelper(root, INT_MIN, INT_MAX);
    return ans;
}
