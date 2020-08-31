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
Node *pairWiseSwap(Node *head)
{
    Node *p;
    Node *q;

    p = head;

    q = p->next;

    Node* newHead = q;

    while(1)
    {

        q= p->next;

        Node *temp = q->next;

        q->next = p;

        if(temp==NULL || temp->next == NULL)
        {

            p->next = temp;
            break;
        }
        p->next = temp->next;
        p = temp;
    }

    return newHead;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    Node *newhead = pairWiseSwap(head);

    printLinkedList(newhead);

}
