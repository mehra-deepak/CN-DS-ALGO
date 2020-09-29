bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return true;
    }
    if(root1->children.size()!= root2->children.size())
    {
        return false;
    }
    if(root1->data!=root2->data)
    {
        return false;
    }

    bool smallans;
    for(int i=0;i<root1->children.size();i++)
    {
        bool smallans=isIdentical(root1->children[i],root2->children[i]);
        if(smallans==false)
        {
            return false;
        }

    }
    return true;

}
