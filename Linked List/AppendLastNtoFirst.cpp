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

Node* AppendLastNToFirst(Node* head, int x)
{
    Node* temp1 = head;

    Node*temp2 = head;

    int count=0;

    while(count<x-2)
    {
        temp2=temp2->next;
        count++;
    }

    head = temp2->next;
    temp2->next =NULL;

    Node*temp =head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next= temp1;

    return head;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    int x;
    cin>>x;

    Node* afterAppendHead = AppendLastNToFirst(head,x);

    printLinkedList(afterAppendHead);

}
