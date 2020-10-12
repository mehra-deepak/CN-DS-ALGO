void helper(TreeNode<int> *root, int depth)
{
    if(root)
    {
        root->data=depth;
    }
    for(int i=0;i<root->children.size();i++)
    {
        helper(root->children[i],depth+1);
    }
    return;
}

void replaceWithDepthValue(TreeNode<int> *root)
{

    int depth=0;
    helper(root,depth);
    return;
}
