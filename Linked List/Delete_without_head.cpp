/* head nahi ayega hamare pass ayega koi bhi mid node and hame
usko directly remove karna hai, this can be done using 2 ways,

Directly replacing the Node, this one is more efficient.

1) Isme ek limitation ye hai ki is problem mai last element delete karne ko nahi hona chiye 

2) Atleast 2 elements hona chiye.


*/
void deleteNode(Node *node)
{
    Node *temp = node->next;
    
    *node = *(node->next);
    
    delete temp;
}