bool isNodePresent(BinaryTreeNode<int>* root, int x)
{

    if(root==NULL)
    {
        return false;
    }
    if(root->data==x)
    {
        return true;
    }

    bool smallans=isNodePresent(root->left,x);
    if(smallans==true)
    {
        return smallans;
    }
    else
    {
        smallans=isNodePresent(root->right,x);
        if(smallans==true)
        {
            return smallans;
        }
    }

    if(smallans)
    {
        return true;
    }
    else
    {
    	return false;
    }

}
