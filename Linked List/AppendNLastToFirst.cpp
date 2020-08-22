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
int lengthLL(Node* head)
{
    Node * temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;

}
Node *appendLastNToFirst(Node *head, int x)
{
    if(x==0)
    {
        return head;
    }
    if(head == NULL)
    {
        return head;
    }


    Node *temp = head;

    int count = lengthLL(head);

    int y = count - x;

    int cnt = 0;

    while(temp!= NULL &&  cnt < y-1)
    {
        temp= temp->next;
        cnt++;
    }

    Node *newHead = temp->next;
    temp->next = NULL;

    Node *dummy = newHead;
    while(dummy->next != NULL)
    {
        dummy = dummy->next;
    }
    dummy->next = head;

    return newHead;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);


    int x;
    cin>>x;

    Node *newHead = appendLastNToFirst(head,x);

    printLinkedList(newHead);

}

