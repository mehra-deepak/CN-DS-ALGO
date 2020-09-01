/*


Split circular Linked List in two halves, if there are odd element than first
list should contain one extra node

*/

void splitIntoTwo(Node*head);
{
    Node *head1;
    Node* head2;
    
    if(head==NULL)
    {
        return;
    }
    
    Node *slow= head;
    Node *fast = head;
    
    while(fast->next!= head &&  fast->next->next!=head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    /* If there are even elements in list 
       then move fast_ptr */
    
    if(fast->next->next == head)
    {
        fast = fast->next;
    }
    
    head1= head;
    
    if(head->next != head)
    {
        head2 = slow->next;
    }
    
    fast->next = slow->next;
    
    slow->next = head;
    
}
