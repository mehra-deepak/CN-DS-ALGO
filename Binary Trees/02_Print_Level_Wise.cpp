void printLevelWise(BinaryTreeNode<int>* root)
{
    queue<BinaryTreeNode<int>* pendingNodes>;
    pendingNodes.push(root);
    pendingNodes.push(NULL);

    while(!pendingNodes.empty())
    {
        BinaryTreeNode<int>* frontNode = pendingNodes.front();
        pendingNodes.pop();

        if(frontNode==NULL)
        {
            cout<<"\n";
            if(!pendingNodes.empty())
            {
                pendingNodes.push(NULL);
            }
        }
        else
        {
            cout<<frontNode->data<<" ";
            if(frontNode->left != NULL)
            {
                pendingNodes.push(frontNode->left);
            }
            if(frontNode->right !=NULL)
            {
                pendingNodes.push(frontNode->right);
            }
        }
    }
}
