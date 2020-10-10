BinaryTreeNode<int>* helper(int *input,int si,int ei)
{

    if(si>ei)
    {
        return NULL;
    }
    int mid = (si+ei)/2;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[mid]);
    BinaryTreeNode<int> *left1 = helper(input,si,mid-1);
    BinaryTreeNode<int> *right1 = helper(input,mid+1,ei);
    root->left = left1;
    root->right = right1;
    return root;


}

BinaryTreeNode<int>* constructTree(int *input, int n)
{
    BinaryTreeNode<int>* ans = helper(input,0,n-1);
    return ans;
}
