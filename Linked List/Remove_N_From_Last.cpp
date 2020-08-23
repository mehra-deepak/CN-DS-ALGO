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

Node *removeNFromLast(Node* head, int n)
{
    Node* p = head;
    Node* q = head;

    for(int i=0;i<n;i++)
    {
        p = p->next;
    }

    if(p == NULL)
    {
        return head->next;
    }
    while(p->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    q->next =  q->next->next;

    return head;

}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    int n;

    cin>>n;

    Node* newhead = removeNFromLast(head, n);

    printLinkedList(newhead);

}
