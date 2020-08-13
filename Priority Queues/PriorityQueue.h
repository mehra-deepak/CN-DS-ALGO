/*

PRIORITY QUEUE :

NOTE 1 : Priority Queues are implemented using Heap which is a complete Binary Tree

NOTE 2: Complete Binary Tree does not requires actual Tree Data Structures we visualize 
it as CBT and it is implemented with the help of a vector following a generalized formula.


*/

#include <vector>
class PriorityQueue
{
    vector<int> pq;  // vector for storing the values
    
    public:
    
    PriorityQueue()  // constructor for automatic call
    {
        
    }
    
    bool isEmpty()
    {
        return pq.size()==0;  // if size=0 and 0==0 return True else False
    }
    
    int getSize()
    {
        return pq.size();
    }
    
    int getMin()
    {
        if(isEmpty())  // if PQ empty return 0
        {
            return 0;
        }
        
        return pq[0];  // else minimum will always be present in 0th index / root of tree.
    }
    
    void insert(int element)
    {
        pq.push_back(element); // fulfiils the property of CBT automatically by adding each of the new element at (2i+1) position however heap property is being voilted at times and hence checked.
        
        int childIndex = pq.size()-1;
        
        while(childIndex > 0)
        {
            int parentIndex = (childIndex-1)/2;
            if(pq[childIndex] < pq[parentIndex])
            {
                swap(pq[childIndex],pq[parentIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }
    
    int removeMin()
    {
        // if empty nothing to remove
        if(isEmpty())
        {
            return 0;
        }
        
        // min will always be present in the root / first index of vector
        int ans = pq[0];
        
        // swapping the last element to the 0th position
        pq[0]=pq[pq.size()-1];
        
        //removing the last position
        pq.pop_back();
        
        //down-heapify
        int parentIndex =0;
        
        // since the comparisions are to be made with both the left and the right child so both needed
        int leftChildIndex = 2* parentIndex+1;
        int rightChildIndex = 2* parentIndex+2;
        
        while(leftChildIndex < pq.size()) // checking the limits for leftChildIndex
        {
            int minIndex = parentIndex;
            if(pq[minIndex] > pq[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            
            if(rightChildIndex < pq.size() && pq[rightChildIndex]< pq[minIndex]) // before && condition -> only compare if right child exits 
            {
                minIndex = rightChildIndex;
            }
            
            if(minIndex == parentIndex)
            {
                break;
            }
            
            swap(pq[minIndex],pq[parentIndex]);
            
            parentIndex = minIndex;
            leftChildIndex = 2*parentIndex +1;
            rightChildIndex = 2* parentIndex+2;
        }
        
        return ans;
        
    }
};
