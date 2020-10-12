bool containsX(TreeNode<int>* root, int x)
{

    if(root->data==x)
    {
        return true;
    }

    for(int i=0;i<root->children.size();i++)
    {
        bool smallans=containsX(root->children[i],x);
        if(smallans==true)
            return true;


    }
    return false;

}
