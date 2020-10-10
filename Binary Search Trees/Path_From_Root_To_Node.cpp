vector<int>* findPath(BinaryTreeNode<int>* root, int data)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->data == data)
    {
        vector<int>* output = new vector<int>;
        output->push_back(root->data);
        return output;
    }

    else if(data < root->data)
    {
        vector<int>* output = findPath(root->left, data);
        if(output!=NULL)
        {
            output->push_back(root->data);
        }

        return output;
    }
    else
    {
        vector<int>* output = findPath(root->right, data);
        if(output!=NULL)
        {
            output->push_back(root->data);
        }

        return output;
    }
}
