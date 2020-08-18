#include<iostream>
using namespace std;
#include"Node.cpp"
Node* takeInput()
{
    Node* head =NULL;
    Node* tail =NULL;


    int data;
    cin>>data;

    while(data != -1)
    {
        Node *newNode = new Node(data);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next= newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}
void printLL(Node *head)
{
    Node *temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next<<" ";
    }
}
int main()
{
    Node *head= takeInput();

    printLL(head);
}
