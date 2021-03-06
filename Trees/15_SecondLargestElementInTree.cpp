void secondLargest(TreeNode<int> * root, TreeNode<int> **first , TreeNode<int> **second)
{

    if(*first==NULL)
    {
        *first=root;
    }

    else if((*first)->data<root->data)
    {
        *second=*first;
        *first=root;
    }
    else if((*second==NULL)|| ((*first)->data)>(root->data)&&((*second)->data)<(root->data))
    {
        *second=root;
    }
    for(int i=0;i<root->children.size();i++)
    {
        secondLargest(root->children[i],first,second);
    }

}


TreeNode <int>* secondLargest(TreeNode<int> *root)
{
    TreeNode<int>*first=NULL;
    TreeNode<int>*second=NULL;

    secondLargest(root,&first,&second);

    return second;
}
