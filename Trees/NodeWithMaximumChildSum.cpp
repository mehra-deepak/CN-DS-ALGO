TreeNode<int>* maxSumNode(TreeNode<int> *root)
{

    int sum=0;

    TreeNode<int>* max = root;
    for(int i=0;i<root->children.size();i++)
    {
        sum+=root->children[i]->data;
    }

    sum+=root->data;


    // recursion vala part
    for(int i=0;i<root->children.size();i++)
    {
         int smallsum=0;
        TreeNode<int>* smax= maxSumNode(root->children[i]);

        // child nodes k sum
        for(int j=0;j<smax->children.size();j++)
        {
             smallsum += smax->children[j]->data;
        }
        smallsum += smax->data;

        if(smallsum>sum)
        {
            max = smax;
            sum = smallsum;
        }
    }
    return max;



}
