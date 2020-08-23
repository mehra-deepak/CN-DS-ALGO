# LINKED LIST

Linked List first file is the Node Class file : 

### Class.cpp

```
class Node
{
public:              // kyuki hum data and next ko explicitly use karenge bahar se isleye public
    int data;
    Node *next;      // kyuki Node type k pointer ka address save karna hai
    
    Node(int data)   // parametrised constructor
    {
        // this can't explain in short words but easy hai understand karna)
        this->data = data; 
        next = NULL;
    }
};

```

### main.cpp


```
#include<iostream>
using namespace std;
#include "Node.cpp"
int main()
{
    /*  
        class k object 2 tarike se bana skte statically and dynamically
    */
    
    
    /*----------------------- Static initialization------------------------*/

    Node n1(1);
    Node *head = &n1;
    
    Node n2(2);
    n1.next = &n2;
    
    /*
        likewise we can access data as n1.data i.e object.data;
    */
    
    
    /*
         (*head).data;
          head-> data; //shortcut
          
          int a=5;        
    
          cout<<a<<endl;  --> 5
           
          int *b= &a;     
           
          cout<<b<<endl;  --> 0x7ffd47d71c40
           
          int c= *b;      
           
          cout<<c<<endl;  --> 5
    
    */
    
    cout<<head->data;
    
    /*----------------------- Static initialization------------------------*/

    Node *n3 = new Node(10);
    Node *head = n3;
    
    Node *n4 = new Node(20);
    n3->next = n4;
    
    
    
}
```

* One Important Question worth doing is the one jisme hum mid-point nikalte hai using fast and slow pointers. 

```
usme 
fast = fast ->next ->next;
slow = slow -> next;

loop runs for two conditions :

while(p!=NULL && p->next !=NULL)

1st for Even Length Linked List.
2nd for Odd Legth of Linked List.
```
