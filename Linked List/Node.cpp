class Node
{
public:              // kyuki hum data and next ko explicitly use karenge bahar se isleye public
    int data;
    Node *next;      // kyuki Node type k pointer ka address save karna hai

    Node(int data)   // parametrised constructor
    {
        // this can't explain in short words but easy hai understand karna)
        this->data = data;
        next = NULL;
    }
};
