// When dynamically allocated Vector has to be returned
vector<int>* getRootToNodePath(BinaryTreeNode<int>* root, int data)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data == data)
    {
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    vector<int>* leftOutput = getRootToNodePath(root->left,data);
    if(leftOutput!=NULL)
    {
        leftOutput->push_back(root->data);
        return leftOutput;
    }
    vector<int>* rightOutput = getRootToNodePath(root->right,data);
    if(rightOutput!=NULL)
    {
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else
    {
        return NULL;
    }
}


// 2nd

vector<int> getRootToNodePath(BinaryTreeNode<int>* root, int data)
{
    vector<int> vect;


    if(root== NULL)
    {
        return vect;
    }

    if(root->data == data)
    {
        vect.push_back(data);
    }

    vector<int> leftTree = getRootToNodePath(root->left, data);
    if(leftTree.size()!=0)
    {
        leftTree.push_back(root->data);
        return leftTree;
    }

    vector<int> rightTree = getRootToNodePath(root->right, data);
    if(rightTree.size()!=0)
    {
        rightTree.push_back(root->data);
        return rightTree;
    }
    else
    {
        return vect;
    }

}
