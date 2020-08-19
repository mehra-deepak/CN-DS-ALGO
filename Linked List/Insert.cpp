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

Node* insertPos(Node* head, int pos)
{
    Node*temp =head;

    int data;
    cin>>data;

    Node *newNode = new Node(data);

    if(pos==0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    else
    {
        int count =0;
        while(count<pos-1 && temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(temp!=NULL)
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    return head;
}
int main()
{
    Node *head = insertInput();

    printLL(head);

    int x;

    cin>>x;

    Node* inserthead = insertPos(head,x);

    printLL(inserthead);



}

