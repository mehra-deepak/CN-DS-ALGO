int numOfNodes(TreeNode<int>* root)
{
    int ans =0;  // root k corresponding

    if(root->children.size()==0)
    {
	ans++;
    }


    for(int i=0;i<root->children.size();i++)
    {
        ans += numOfNodes(root->children[i]);
    }

    return ans;
}
