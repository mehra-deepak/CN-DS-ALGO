// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/

void printLevelWise(BinaryTreeNode<int> *root)
{

        queue<BinaryTreeNode<int>*> pendingNodes;
        pendingNodes.push(root);
        while(pendingNodes.size()!=0)
		{
            BinaryTreeNode<int>* front=pendingNodes.front();

            cout<<front->data<<":";
            pendingNodes.pop();


            if(front->left!=NULL)
            {
                cout<<"L:"<<front->left->data<<",";
                pendingNodes.push(front->left);
            }
            else
            {
                cout<<"L:-1,";
            }
          if(front->right!=NULL)
            {
                cout<<"R:"<<front->right->data;
                pendingNodes.push(front->right);
            }
            else
            {
                cout<<"R:-1";
            }
            cout<<endl;
        }

}
