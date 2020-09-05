#include<climits>

class StackUsingArray
{
    int *data; // kyuki hame size nahi pata array ka ,isleye humne pointer bana dia
    int nextIndex
    int capacity;
public:
    StackUsingArray()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4; // taki capacity throughout the class accessible rahe
    }
    
    
    int size()
    {
        return nextIndex;
    }
    
    bool isEmpty()
    {
        if(nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    // insert element
    
    void push(int element)
    {
        if(nextIndex==capacity)
        {
            int *newData = new int[2* capacity];
            for(int i=0;i<capacity;i++)
            {
                newData[i] = data[i];
                
            }
            capacity*=2;
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        
        nextIndex--;
        return data[nextIndex];
    }
    
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
    
}