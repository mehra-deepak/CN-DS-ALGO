TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n)
{   TreeNode<int>*ans=NULL;
    if(root->data>n)
    {
        ans=root;
    }

    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>* temp=nextLargerElement(root->children[i],n);
        if(ans==NULL)
        {
            ans=temp;
        }
        if(temp!=NULL&&temp->data<ans->data)
        {
            ans=temp;
        }
    }

    return ans;

}
