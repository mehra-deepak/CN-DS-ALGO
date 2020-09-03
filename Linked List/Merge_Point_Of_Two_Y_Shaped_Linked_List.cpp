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
int length(Node * head)
{
    int len = 0;
    while(head!=NULL)
    {
        len ++;
        head=head->next;
    }
    return len;
}
Node *findMergeNode(Node*A, Node* B)
{
    int m = length(A);
    int n=  length(B);
    int d = n - m;
    
    
    // swapping kyuki hame ye nahi pta A ya B mai se bada kon hai and hum b ko assume kare hai vo bda hoga 
    if(m > n)
    {
        Node *temp = A;
        A = B;
        B = temp;
        d = m - n ; 
    }
    
    for(int i=0;i<d;i++)
    {
        B = B->next;
    }
    
    while(A !=NULL && B!=NULL)
    {
        if(A == B)
        {
            return A;
        }
        A = A->next;
        B = B->next;
    }
    
    return NULL;
}

