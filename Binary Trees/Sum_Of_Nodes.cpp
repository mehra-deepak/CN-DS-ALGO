int sumOfAllNodes(BinaryTreeNode<int>* root)
{

    if(root==NULL)
    {
        return 0;
    }
    int sum=root->data;
    int smallSumLeft=sumOfAllNodes(root->left);
    int smallSumRight=sumOfAllNodes(root->right);
    return sum+smallSumLeft+smallSumRight;

}
