void printBinaryTree(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<":";
    if(root->left !=NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right !=NULL)
    {
        cout<<"R"<<root->right->data;
    }
    printBinaryTree(root->left);
    printBinaryTree(root->right);
}


BinaryTreeNode<int>* takeInputLevelWise()
{
    cout<<"Enter Data";

    int rootData;
    cin>>rootData;
    if(rootData ==-1)
    {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(root);
    BinaryTreeNode<int>* left  = takeInputLevelWise();
    BinaryTreeNode<int>* right  = takeInputLevelWise();
    root->left = left;
    root->right = right;



}
