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

 // PairAns class -
 class PairAns {
    public :
        int min;
        int max;
 };

***************/




PairAns minMax(BinaryTreeNode<int> *root)
{

    ///minmax(root);
    if(root==NULL)
    {
        PairAns p;
        p.min=INT_MAX;
        p.max=INT_MIN;

        return p;
    }

    // first mai max hai

    PairAns leftmaxmin=minMax(root->left);
    PairAns rightmaxmin=minMax(root->right);

	int lmin = leftmaxmin.min;
    int lmax = leftmaxmin.max;
    int rmin = rightmaxmin.min;
    int rmax = rightmaxmin.max;


    int maxx=max(root->data,max(lmax,rmax));
    int minn=min(root->data,min(lmin,rmin));    ////////    we have to compare root->data as well

    PairAns p;
    p.max=maxx;
    p.min=minn;

    return p;


}
