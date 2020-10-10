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
#include<climits>
class Pair{
    public:
    int height;
    bool isBST;
    int max;
    int min;
};


Pair to_check(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        Pair obj;
        obj.max=INT_MIN;
        obj.min=INT_MAX;
        obj.isBST=true;
        obj.height=0;
        return obj;
    }


    Pair ans;

    Pair left=to_check(root->left);
	Pair right=to_check(root->right);


    bool y = root->data > left.max && root->data <=right.min && left.isBST && right.isBST;

    if(y)
    {
        ans.height=max(right.height,left.height)+1;
      	ans.isBST=true;
    }
    else
    {	ans.isBST=false;
        ans.height=max(right.height,left.height);
    }

    ans.max=max(root->data,max(left.max,right.max));
    ans.min=min(root->data,min(left.min,right.min));


    return ans;

}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{

	Pair p;
    p = to_check(root);
    // p will have 4 values
    return p.height;
}
