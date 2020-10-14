// // Following is the Binary Tree node structure
// /**************
// class BinaryTreeNode {
//     public :
//     T data;
//     BinaryTreeNode<T> *left;
//     BinaryTreeNode<T> *right;

//     BinaryTreeNode(T data) {
//         this -> data = data;
//         left = NULL;
//         right = NULL;
//     }
// };

// ***************/
#include<stack>
using namespace std;
void zigZagOrder(BinaryTreeNode<int> *root)
{

    stack<BinaryTreeNode<int>* > s1;
    stack<BinaryTreeNode<int>* > s2;

    s1.push(root);

    while(s1.size()!=0 || s2.size()!=0)
    {
        while(s1.size()!=0)
        {
            BinaryTreeNode<int> *root=s1.top();

            if(root ->left !=NULL)
                s2.push(root->left);

            if(root -> right !=NULL)
                s2.push(root->right);

            cout<<root->data<<" ";

            s1.pop();

        }
        cout<<endl;

        while(s2.size()!=0)
        {
            BinaryTreeNode<int> *root=s2.top();

            if(root -> right !=NULL)
                s1.push(root->right);

            if(root -> left!=NULL)
                s1.push(root->left);

            cout<<root->data<<" ";
            s2.pop();
        }

        cout<<endl;
    }

}
