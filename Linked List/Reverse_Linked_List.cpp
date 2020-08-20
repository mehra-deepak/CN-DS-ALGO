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
Node * reverseLinkedList(Node *head)
{
    Node* currentNode= head;

    Node* prevNode = NULL;

    Node* nextNode =head;

    while(nextNode!=NULL)
    {
        nextNode = nextNode->next;
        currentNode->next = prevNode;
        prevNode= currentNode;
        currentNode = nextNode;

    }
    head = prevNode;

    return head;
}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    Node *reversedHead=reverseLinkedList(head);

    printLinkedList(reversedHead);


}

