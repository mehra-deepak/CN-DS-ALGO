// each time hamare pass ek naya element ayega hum use head mai attach
// karenge naki tail mai.

#include<iostream>
using namespace std;

class Node
{
public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class stack 
{
    Node *head;
    int size;
    
public: 
    Stack()
    {
        head = NULL:
        size =0;
    }
    
    int getSize()
    {
        return size;
    }
    
    bool isEmpty()
    {
        return size == 0;
    }
    
    void push(int element)
    {
        Node* newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty";
            return 0;
        }
        int ans = head->data;
        Node* temp = head;
        head= head->next;
        delete temp;
        
        return ans;
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty";
            return 0;
        }
        return head->data;
    }
}