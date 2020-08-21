#include<iostream>
using namespace std;
#include "NodeClass.cpp"
Node* insertInLinkedList()
{
    int data;
    cin>>data;

    Node* head =NULL;
    Node* tail = NULL;


    while(data!=-1)
    {
        Node *newNode = new Node(data);

        if(head== NULL)
        {
            head =newNode;
            tail =newNode;
        }
        else
        {
            tail->next = newNode;
            tail =newNode;
        }

        cin>>data;
    }

    return head;
}
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
Node* mergeTwoSortedLinkedList(Node* head1, Node* head2)
{
    Node* finalHead =NULL;
    Node *finalTail =NULL;

    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data< head2->data)
        {
            if(finalHead==NULL)
            {

                finalHead = head1;
                finalTail = head1;
            }
            else
            {
                finalTail->next = head1;
                finalTail = head1;
            }

            head1 = head1->next;
        }
        else
        {
            if(finalHead==NULL)
            {

                finalHead = head2;
                finalTail = head2;
            }
            else
            {
                finalTail->next = head2;
                finalTail = head2;
            }

            head2 = head2->next;
        }
    }

    if(head1 == NULL)
    {
        finalTail->next = head2;
    }

    if(head2 == NULL)
    {
        finalTail->next = head1;
    }

    return finalHead;
}
int main()
{
    Node *head1 = insertInLinkedList();

    Node *head2 = insertInLinkedList();

    printLinkedList(head1);

    printLinkedList(head2);

    Node * mergedhead3 = mergeTwoSortedLinkedList(head1, head2);

    printLinkedList(mergedhead3);

}

