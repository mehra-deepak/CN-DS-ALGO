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
Node *EliminateDuplicates(Node* head)
{
    Node *currentHead = head;
    while(currentHead->next != NULL)
    {
        if(currentHead->data == currentHead->next->data)
        {
            currentHead->next = currentHead->next->next;
        }
        else
        {
            currentHead= currentHead->next;
        }
    }
    return head;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    Node* headafterElimination = EliminateDuplicates(head);

    printLinkedList(headafterElimination);
}

