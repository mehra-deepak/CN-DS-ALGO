void printTree(TreeNode<int>* root)
{
    cout<<root->data<<":";

    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
