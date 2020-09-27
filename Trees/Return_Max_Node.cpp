TreeNode<int>* maximumNode(TreeNode<int>* root)
{

    if(root == NULL
    {
           return root;
    }

    TreeNode<int>* max = root;

    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>* temp = maximumNode(root->children[i]);
        if(temp->data > max->data)
        {
            max = temp;
        }
    }

    return max;

}
