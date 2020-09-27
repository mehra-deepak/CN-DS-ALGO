void printAtLevelD(TreeNode<int>* root, int k)
{
    if(k==0)
    {
        cout<<root->data<<endl;
        return;
    }

    for(int i=0;i<root->children.size();i++)
    {
        printAtLevelD(root->children[i],k-1);
    }
}
