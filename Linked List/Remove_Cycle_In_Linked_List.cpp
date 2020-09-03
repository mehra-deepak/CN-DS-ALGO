Node* removeTheLoop(Node *head)

     
     // Loop remove karne k lie loop ka hona bhi bahut zaruri hai, to ye code loop ko detect karne k lie hai.
     Node *temp1,*temp2;
     temp1=head;
     temp2=head;
     while(temp1 && temp2 && temp2->next)
     {
         temp1=temp1->next;
         temp2=temp2->next->next;
         if(temp1==temp2)
         {
             break;
         }
     }
     
     // run only when the loop is detected
     if(temp1==temp2)
     {
         temp2=head;
         while(temp2->next!=temp1->next)
         {
             temp2=temp2->next;
             temp1=temp1->next;
         }
        temp1->next=NULL;
         
     }
    return head;
}
