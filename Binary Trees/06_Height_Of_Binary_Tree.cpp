int height(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftheight=0;
    int rightheight=0;

    leftheight+=height(root->left);
    rightheight+=height(root->right);

    return 1+max(leftheight,rightheight);
}

