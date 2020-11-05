void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root == NULL)
    {
        return;
    }
    insertDuplicateNode(root->left);
    insertDuplicateNode(root->right);


    BinaryTreeNode<int> *new_node = new BinaryTreeNode<int>(root->data) ;  //new node bnae
    BinaryTreeNode<int> *left = root->left;  //saving root->left
    root->left = new_node;  //connection of new node to old node
    new_node->left = left;  //attach purana left ka amsala to new node



}
