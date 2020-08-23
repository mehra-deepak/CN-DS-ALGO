
Node* detectCycle(Node *head)
{

    Node* slow = head;
    Node* fast = head;
    int flag=0;

    while(fast->next != NULL && fast != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            flag =1;
            cout<<"cycle detected";
            break;
            
        }
    }
    if(flag==0)
    {
        cout<<"No Cycle";
    }
    
    // Detecting the start of Loop
    
    slow = head;
    
    while(slow != fast)
    {
        slow= slow->next;
        fast=fast->next;
    }
    
    return slow;
}