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
int returnMidOfLinkedList(Node* head)
{
    Node *fast = head->next;

    Node *slow = head;

    while(fast!=NULL && fast->next !=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow->data;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    int mid = returnMidOfLinkedList(head);

    cout<<mid;
}

