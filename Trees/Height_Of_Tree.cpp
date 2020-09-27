int height(TreeNode<int>* root)
{
    int ans = 0;

    for(int i=0;i<root->children.size();i++)
    {
        int h = height(root->children[i]);
        if(h>ans)
        {
            ans =h;
        }
    }

    return ans+1;
}
