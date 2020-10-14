// Following is the Node and Binary Tree node structure

/**************
class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};

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
#include<bits/stdc++.h>
using namespace std;
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {

    node<int>* head = NULL;
    node<int>* tail = NULL;
    vector<node<int>*> output;
    queue<BinaryTreeNode<int>*> q;
    BinaryTreeNode<int>* current = root;
    q.push(root);
    q.push(NULL);

	 while(!q.empty())
     {
	 	current = q.front();
	 	q.pop();

	 	if(current != NULL)
        {
            node<int>* newnode = new  node<int>(current -> data);

            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
            }
            else
            {
		  		tail -> next = newnode;
		  		tail = newnode;
		  	}
            if(current -> left != NULL )
                q.push(current -> left);
            if(current -> right != NULL)
                q.push(current -> right);

	    }
        else if(current == NULL)
        {
            output.push_back(head);
	    	head = NULL;
	    	tail = NULL;
            if(q.empty())
                break;
            else
            q.push(NULL);
        }

	 }

    return output;

}
