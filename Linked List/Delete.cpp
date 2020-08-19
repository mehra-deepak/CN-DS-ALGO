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
Node* deletePos(Node* head, int pos)
{
    int count =0;
    Node *temp = head;

    if(pos == 0)
    {
        temp=temp->next;
        delete(temp);
        return head;
    }
    else
    {
        while(count < pos-1 && temp !=NULL)
        {

            temp=temp->next;
            count++;
        }
        if(temp->next !=NULL)
        {

            Node *a= temp->next;
            Node *b= a->next;
            temp->next=b;
            delete(a);
        }
    }

    return head;
}
int main()
{

    Node *head = insertInput();
    printLL(head);

    cout<<"Enter the node you want to delete Element from: ";
    int x;
    cin>>x;

    Node *delHead = deletePos(head, x);
    printLL(head);
}

