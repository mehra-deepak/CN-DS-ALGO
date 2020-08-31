void printLinkedList(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* addTwoNumbers(Node *l1, Node *l2)
{
    Node *dummy_head = new Node(0);
    Node *l3 = dummy_head;

    int carry = 0;

    while(l1 != NULL || l2 != NULL)
    {
        int l1_val = (l1 != NULL) ? l1->data : 0;
        int l2_val = (l2 != NULL) ? l2->data : 0;

        int current_sum = l1_val + l2_val + carry;
        carry = current_sum/10;
        int last_digit = current_sum %10;

        Node *newNode = new Node(last_digit);
        l3->next = newNode;

        if(l1 !=NULL)
        {
            l1 = l1->next;
        }
        if(l2 != NULL)
        {
            l2 = l2->next;
        }

        l3=l3->next;
    }

    if(carry > 0)
    {

        Node* newNode = new Node(carry);
        l3->next =  newNode;
        l3 = l3->next;
    }
    return dummy_head->next;
}