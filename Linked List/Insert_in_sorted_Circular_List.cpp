// insertion in a sorted circular linked list 

void sortedLinkedListInsert(Node * head, int data)
{
    // data is the data to be inserted create a node for the same
    
    Node *current = head;
    
    Node *newNode = new Node(data);
    
    // Now there can be three possible cases
    
    // Case 1 : Head is Null , is case mai ek hi node hai jo humpe aaya hai uski tail se use hi connect kardo 
    
    if(current== NULL)
    {
        newNode->next = newNode;
        head = newNode;
    }
    
    // case 2 : insert before head
    
    else if(current->data >= newNode->data)
    {
        while(current->next!= newNode->data)
        {
            current= current->next;
        }
        
        current->next = newNode;
        newNode->next = head;
        head = newNode;
    }
    
    // case 3 : insert after head
    else
    {
        while(current->next != head && current->next->data < newNode->data)
        {
            current = current->next;
        }
        
        newNode->next = current->next;
        current->next = newNode;
    }
    
}