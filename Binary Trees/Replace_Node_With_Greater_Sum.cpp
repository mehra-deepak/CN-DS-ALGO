// Following is the Binary Tree node structure
/******
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
*****/
int helper(BinaryTreeNode<int> *root,int sum)
{
    if(root == NULL)
    {
        return sum;
    }
    int ans = helper(root->right,sum);

    ans+=root->data;
    root->data = ans;
    helper(root->left,ans);

}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root)
{

    if(root == NULL)
    {
        return;
    }

    helper(root,0);

}
