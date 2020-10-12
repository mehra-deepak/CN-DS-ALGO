int nodesGreaterThanX(TreeNode<int> *root, int x)
{

    int count=0;
    if(root->data > x)
    {
        count++;
    }
    for(int i=0;i<root->children.size();i++)
    {
        count+=nodesGreaterThanX(root->children[i],x);

    }
    return count;

}
