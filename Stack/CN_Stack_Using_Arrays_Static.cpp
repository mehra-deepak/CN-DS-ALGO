class StackUsingArray
{
    int *data; // kyuki hame size nahi pata array ka ,isleye humne pointer bana dia
    int nextIndex;
    int capacity;
public:
    StackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize; // taki capacity throughout the class accessible rahe
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
            cout<<"Stack Full";
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

};
