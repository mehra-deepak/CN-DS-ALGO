void printLevelWise(BinaryTreeNode<int> *root) 
{
    
    if(root==0)
    {
        return;
    }
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()!=0)
    {
        BinaryTreeNode<int>* front=q.front();
        q.pop();
        if(front==NULL)
        {
            cout<<endl;
            if(q.empty())
            {
                break;
            }
            else
            {
                q.push(NULL);
            }
        }
        else
        {
        
			cout<<front->data<<" ";
			if(front->left!=NULL)
				q.push(front->left);
			if(front->right!=NULL)
				q.push(front->right);
        }
    }

}
