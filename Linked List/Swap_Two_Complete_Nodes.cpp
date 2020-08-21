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
Node* SwapNodes(Node* head, int x , int y)
{
    if(x==y)
    {
        return head;
    }

    Node *prevX = NULL;
    Node *currX = head;
    Node *prevY = NULL;
    Node *currY = head;
    int count1=0;
    int count2=0;

    while(currX  && count1<x)
    {

        prevX = currX;
        currX= currX->next;
        count1++;
    }

    while(currY && count2<y)
    {

        prevY = currY;
        currY = prevY->next;
        count2++;
    }

    if(currX ==NULL || currY == NULL)
    {
        return head;
    }

    if(prevX != NULL)
    {
        prevX->next = currY;
    }
    else
    {
        head = currY;
    }
    if(prevY != NULL)
    {
        prevY->next = currX;
    }
    else
    {
        head = currX;
    }

    Node *temp  = currY->next;
    currY->next = currX->next;
    currX->next = temp;

    return head;

}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    int m;
    int n;
    cin>>m;
    cin>>n;

    Node *newHead = SwapNodes(head,m,n);

    printLinkedList(newHead);

}

