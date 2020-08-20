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
bool palindrome(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return true;
    }

    Node *p = head->next;

    Node *q = head;

    Node *head1 = head;
    Node *secondHead = NULL;

    while(p!=NULL && p->next !=NULL)
    {
        p=p->next->next;
        q= q->next;
    }

    secondHead = q->next;
    q->next = NULL;

    Node* head2 = reverseLinkedList(secondHead);

    while(head1!=NULL && head2!= NULL)
    {
        if(head1->data == head2->data)
        {
            head1= head1->next;
            head2= head2->next;

        }
        else
        {
            return false;
        }

    }
    return true;

}
int main()
{
    Node *head = insertInLinkedList();

    printLinkedList(head);

    bool ans = palindrome(head);

    cout<<ans;
}

