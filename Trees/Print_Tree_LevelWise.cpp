void printTreeLevelWise(TreeNode<int>* root)
{

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        TreeNode<int>* front = pendingNodes.front();

        pendingNodes.pop();

        cout<<front->data<<":";

        for(int i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data<<",";

            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }

}
