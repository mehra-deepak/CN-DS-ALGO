#include<iostream>
using namespace std;
#include"NodeClass.cpp"
Node* insertInput()
{
    int data;
    cin>>data;

    Node *head= NULL;
    Node *tail= NULL;

    while(data!=-1)
    {
         Node *newNode = new Node(data);
         if(head==NULL)
         {
             head=newNode;
             tail=newNode;
         }
         else
         {
             tail->next = newNode;
             tail=newNode;
         }
         cin>>data;
    }

    return head;

}
void printLL(Node *head)
{
    Node *temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
void printithNode(Node *head, int x)
{
    Node *temp = head;

    int count =0;

    while(temp != NULL)
    {
        if(count == x)
        {
            cout<<temp->data;
            break;
        }
        else
        {
            temp=temp->next;
            count++;
        }

    }
}
int main()
{
    Node *head = insertInput();

    printLL(head);

    cout<<"Enter the position you want to see the data from:";

    int x;

    cin>>x;

    printithNode(head, x);

}

