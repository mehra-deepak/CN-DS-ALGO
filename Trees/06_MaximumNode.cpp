int maximumNode(TreeNode<int>* root)
{

    int ans = root->data;

    for(int i=0;i<root->children.size();i++)
    {
        int smallans = maximumNode(root->children[i]);
        ans = max(smallans,ans);
    }

    return ans;

}
