#include<iostream>
class QueueUsingArray
{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(int s)
    {
        data = new int[s];

        nextIndex =0;
        firstIndex =-1;
        size=0;
        capacity = s; // extend scope
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if(size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //  insert element in Queue

    void enQueue(int element)
    {

        if(capacity==size)
        {
            cout<<"Queue is Full";
            return ;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex +1) % capacity;
        if(firstIndex == -1)
        {
            firstIndex = 0;
        }

        size++;
    }

    //
    int front()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty";
            return 0;
        }

        return data[firstIndex];
    }

    int deQueue()
    {
        if(isEmpty())
        {
            cout<<"Queue Empty";
            return 0;
        }

        int ans = data[firstIndex];
        firstIndex = firstIndex+1%capacity;
        size--;

        // just doing without iske bhi chalega
        if(size==0)
        {
            firstIndex =-1;
            nextIndex = 0;
        }
        return ans;

    }

};
