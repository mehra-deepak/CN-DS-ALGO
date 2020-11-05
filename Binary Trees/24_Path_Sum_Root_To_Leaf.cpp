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
#include<bits/stdc++.h>
#include<iostream>
void helper(BinaryTreeNode<int> *root, int k,string temp)
{
    if(root == NULL)
    {
        return;
    }
    string curr = to_string(root->data);

    helper(root->left,k-root->data,temp + curr +" ");
    helper(root->right,k-root->data,temp + curr + " ");
    if(root->data == k && (root->left == NULL && root->right == NULL))
    {
       temp += curr;
       cout<<temp<<endl;
    }

}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{

    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL && root->data == k)
    {
        cout<<root->data;
        return;
    }

    string temp="";
    helper(root, k , temp);


}
