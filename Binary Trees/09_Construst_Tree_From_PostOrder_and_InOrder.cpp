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

BinaryTreeNode<int>* helper(int* postorder,int postE,int* inorder,int inE,int postS,int inS)
{
    if(inS>inE)
    {
        return NULL;
    }

    int rootdata=postorder[postE];

    BinaryTeeNode<int>* root=new BinaryTreeNode<int>(rootNode);

    int rootIndex=-1;
    for(int i=inS;i<=inE;i++)
    {
        if(inorder[i]==rootdata)
        {
            rootIndex=i;
            break;
        }
    }


    int lpostS=postS;
    int rpostE=postE-1;

    int linS=inS;
    int linE=rootIndex-1;
    int lpostE=linE-linS+lpostS;

    int rpostS=lpostE+1;


    int rinS=rootIndex+1;
    int rinE=inE;


    root->left=helper(postorder,lpostE,inorder,linE,lpostS,linS);
    root->right=helper(postorder,rpostE,inorder,rinE,rpostS,rinS);
}

BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength)
{

    return helper(postorder,postLength-1,inorder,inLength-1,0,0);
}
