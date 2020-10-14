int height(BinaryTreeNode<int> *root)
{
  if(root==NULL)
  {
      return 0;
  }

  int a=height(root->left);
  int b=height(root->right);

  if(ans>b)
  {
      return a+1;
  }
  else
  {
      return b+1;
  }

}
bool isBalanced(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        return 1;
    }

    int y=height(root->left);
    int x=height(root->right);

    if(y-x>1)
        return 0;
    if(x-y>1)
        return 0;
    else
    {
        bool a=isBalanced(root->left);
        bool b=isBalanced(root->right);
        return (a&&b);
    }
}
