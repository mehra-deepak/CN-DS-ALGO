TreeNode<int>* maxSumNode(TreeNode<int> *root)
{

    int sumMax=0;

    TreeNode<int>* max = root;
    for(int i=0;i<root->children.size();i++)
    {
        sumMax+=root->children[i]->data;
    }

    sumMax+=root->data;

    for(int i=0;i<root->children.size();i++)
    {
         int smallsum=0;
        TreeNode<int>* smax= maxSumNode(root->children[i]);
        for(int j=0;j<smax->children.size();j++)  // u need to find sum for ans of recusion
        {
             smallsum += smax->children[j]->data;
        }
        smallsum += smax->data;

        if(smallsum>sumMax)
        {
            max = smax;
            sumMax = smallsum;
        }
    }
    return max;



}
