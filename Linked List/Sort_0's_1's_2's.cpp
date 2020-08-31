void sortList(Node * head)
{
    int count[3] = {0,0,0};
    
    Node* temp = head;
    
    while(temp!=NULL)
    {
        count[temp->data]+=1;
        temp=temp->next;
        
    }
    
    int i = 0;
    
    temp= head;
    
    while(temp!=NULL)
    {
        if(count[i]==0)
        {
            i++;
        }
        else
        {
            temp->data = i;
            --count[i];
            temp= temp->next;
        }
    }
}