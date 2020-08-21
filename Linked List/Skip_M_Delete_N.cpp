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
Node* skipMdeleteN(Node* head, int m, int n)
{
    Node* temp1 = head;

    Node* temp2 = head;

    while(temp1!=NULL && temp2!=NULL)
    {
        int count1 = 1;
        int count2 = 1;
        while(temp1!=NULL && count1< m)
        {
            temp1 = temp1->next;
            count1++;
        }

        if(temp1== NULL)
        {
            return head;
        }
        else
        {
            temp2 = temp1->next;
        }

        while(temp2 != NULL && count2 < n )
        {
            count2++;
            temp2 = temp2->next;
        }
        if(temp2 !=NULL)
        {
            temp1->next = temp2->next;
            temp1 = temp2->next;
        }
        else
        {
            temp1->next = NULL;
        }

    }
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

    Node *newHead = skipMdeleteN(head,m,n);

    printLinkedList(newHead);

}

