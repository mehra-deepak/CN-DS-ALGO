TreeNode<int>* takeInputUsingRecursion()
{
    int rootNode;

    cin>>rootNode;

    TreeNode<int>* root = new TreeNode<int>(rootNode);

    int n;

    cout<<"Enter the number of children of:"<<rootNode;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child = takeInputUsingRecursion();
        root->children.push_back(child);
    }

    return root;
}

void printUsingRecursion(TreeNode<int>* root)
{
    cout<<rootNode<<":";

    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data;
    }
    cout<<endl;

    // Recursion Call for Child Nodes

    for(int i=0;i<children.size();i++)
    {
        printUsingRecursion(root->children[i]);
    }
}
