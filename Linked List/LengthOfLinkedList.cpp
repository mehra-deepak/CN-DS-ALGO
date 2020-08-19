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
int lengthOfLL(Node *head)
{
    int count=0;
    Node* temp= head;
    while(temp!=NULL)
    {
        count++;
        temp= temp->next;
    }
    return count;
}
int main()
{
    Node *head = insertInput();

    printLL(head);

    cout<<"The length of Linked List is: "<<lengthOfLL(head);
}

