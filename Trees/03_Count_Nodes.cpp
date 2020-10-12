int numOfNodes(TreeNode<int>* root)
{
    int ans =1;  // root k corresponding

    for(int i=0;i<root->children.size();i++)
    {
        ans += numOfNodes(root->children[i]);
    }

    return ans;
}
