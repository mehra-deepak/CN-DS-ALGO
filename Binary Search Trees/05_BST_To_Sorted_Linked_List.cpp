Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(root == NULL)
    {
        return NULL;
    }

    Node<int>* rootnode = new Node<int>(root->data);
    Node<int>* lhead = constructBST(root->left);
    Node<int>* rhead = constructBST(root->right);

    if(lhead!=NULL)
    {
        Node<int>* temp = lhead;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = rootnode;
    }
    else
    {
        lhead = rootnode;
    }
    rootnode->next = rhead;

    return(lhead);

}
