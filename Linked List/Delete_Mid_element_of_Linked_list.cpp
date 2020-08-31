Node* deleteMidOfLinkedList(Node* head)
{
    if(head == NULL)
    return NULL;
    
    if(head->next == NULL)
    return NULL;
    
    
    Node *prev;
    
    Node *fast = head;

    Node *slow = head;

    while(fast!=NULL && fast->next !=NULL)
    {
        fast=fast->next->next;
        prev = slow;
        slow=slow->next;
    }
    
    prev->next = slow->next;
    delete slow;
    
    return head;
}