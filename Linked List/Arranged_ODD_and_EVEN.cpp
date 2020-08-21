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
Node* arrangedLinkedList(Node* head)
{
    Node* temp = head;

    Node* oddHead  = NULL;
    Node* oddTail  = NULL;
    Node* evenHead = NULL;
    Node* evenTail = NULL;

    while(temp != NULL)
    {
        int val = temp->data;
        if( val %2 != 0)
        {
            if(oddHead == NULL)
            {
                oddHead = temp;
                oddTail = temp;
            }
            else
            {
                oddTail->next = temp;
                oddTail = temp;
            }
        }
        else
        {
            if(evenHead== NULL)
            {
                evenHead = temp;
                evenTail = temp;
            }
            else
            {
                evenTail->next = temp;
                evenTail = temp;
            }
        }
        temp= temp->next;

    }
    if(oddHead==NULL || evenHead==NULL)
    {
        return head;
    }

    oddTail->next = evenHead;
    evenTail->next = NULL;

    return oddHead;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    Node *arrangedHead = arrangedLinkedList(head);

    printLinkedList(arrangedHead);

}

