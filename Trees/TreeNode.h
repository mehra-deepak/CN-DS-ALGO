#include<vector>
using namespace std;
template<typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T>*> children; // Although writing only <TreeNode*> could have worked.

    TreeNode(T data)
    {
        this->data = data;
    }
};
