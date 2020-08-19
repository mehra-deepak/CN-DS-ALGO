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
int findElement(Node* head, int x)
{
    Node* temp = head;
    int count =0;
    while(temp!= NULL)
    {
        if(temp->data == x)
        {
            return count;
        }
        count++;
        temp=temp->next;
    }
    return -1;

}
int main()
{
    Node *head = insertInput();

    printLL(head);

    int x;

    cin>>x;

    cout<<findElement(head,x);

}

