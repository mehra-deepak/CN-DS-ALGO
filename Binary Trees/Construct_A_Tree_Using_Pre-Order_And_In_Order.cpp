// Following is the Binary Tree node structure
/**************
class BinaryTreeNode
{
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


BinaryTreeNode<int>* helper(int* preorder,int preE,int* inorder,int inE,int inS,int preS)
{
    // we could have checked for Pre as well bus size same hai to one works
    if(inS>inE)
    {
        return NULL;
    }

    int rootData=preorder[preS];

    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootData);

    int rootIndex=-1;
    for(int i=inS;i<=inE;i++)
    {
        if(inorder[i]==rootData)
        {
            rootIndex=i;
            break;

        }
    }


    int linS=inS;
    int linE=rootIndex-1;
    int lpreS=preS+1;
    int lpreE=linE-linS+lpreS;
    int rpreS=lpreE+1;
    int rpreE=preE;
    int rinS=rootIndex+1;
    int rinE=inE;

    root->left=helper(preorder,lpreE,inorder,linE,linS,lpreS);


    root->right=helper(preorder,rpreE,inorder,rinE,rinS,rpreS);
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
       return helper(preorder,preLength-1,inorder,inLength-1,0,0);
}
