int lcaBinaryTree(BinaryTreeNode <int>* root , int val1, int val2){
    // Write your code here
    if(root == NULL)
    {
        return 0 ;
    }
    if(root->data == val1 || root->data == val2)
    {
        return root->data;
    }
    int a = lcaBinaryTree(root->left,val1,val2);
    int b = lcaBinaryTree(root->right,val1,val2);
    if(a == 0 && b == 0)
    {
        return 0;
    }
    else if(a!=0 && b==0)
    {
        return a;
    }
    else if(a==0 && b!=0)
    {
        return b;
    }
    else if(a!=0 && b!=0)
    {
        return root->data;
    }
}

