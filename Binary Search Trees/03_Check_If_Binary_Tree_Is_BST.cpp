bool isBSTHelper(BinaryTreeNode<int>* root, int min, int max)
{
    if(root == NULL)
    {
        return true;
    }

    if(root->data < min || root->data >max)
    {
        return false;
    }

    bool isLeftOK = isBSTHelper(root->left, min , root->data-1);
    bool isrightOK = isBSTHelper(root->right, root->data, max);

    return isLeftOK && isrightOK;
}
bool isBST(BinaryTreeNode<int>* root)
{
    bool ans = isBSTHelper(root, INT_MIN, INT_MAX);
    return ans;
}


// more intutive code



int maximum(BinaryTreeNode<int>* root)
{
	if (root == NULL) 
    {
		return INT_MIN;
	}
	return max(root->data, max(maximum(root->left), maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root) 
{
	if (root == NULL) 
    {
		return INT_MAX;
	}
	return min(root->data, min(minimum(root->left), minimum(root->right)));
}

bool isBST(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return true;
	}

	int leftMax = maximum(root->left);
	int rightMin = minimum(root->right);
	bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
	return output;
}

