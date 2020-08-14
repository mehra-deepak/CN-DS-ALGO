#include<vector>
class PriorityQueues
{
    vector<int> pq;
    
    public:
    
    PriorityQueues()
    {
        
    }
    
    bool isEmpty()
    {
        return pq.size()==0;
    }
    
    int getSize()
    {
        return pq.size();
    }
    
    int getMax()
    {
        if(isEmpty())
        {
            return -1;
        }
        return pq[0];
    }
    
    void insert(int element)
    {
        pq.push_back(element);
        
        int childIndex = pq.size()-1;
        while(childIndex > 0)
        {
            int parentIndex = (childIndex-1)/2;
            if(pq[parentIndex] < pq[childIndex])
            {
                swap(pq[parentIndex],pq[childIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }
    
    int removeMax()
    {
        if(isEmpty())
        {
            return -1;
        }
        
        int ans = pq[0];
        
        pq[0] = pq[pq.size()-1];
        
        pq.pop_back();
        
        int parentIndex =0;
        int leftChildIndex = 2*parentIndex +1;
        int rightChildIndex = 2*parentIndex+2;
        
        while(leftChildIndex < pq.size())
        {
            int maxIndex = parentIndex;
            
            if(pq[leftChildIndex] > pq[maxIndex])
            {
                maxIndex = leftChildIndex;
            }
            
            if(rightChildIndex < pq.size() && pq[rightChildIndex] > pq[maxIndex])
            {
                maxIndex = rightChildIndex;
            }
            if(maxIndex==parentIndex)
            {
                break;
            }
            swap(pq[maxIndex], pq[parentIndex]);
            
            parentIndex = maxIndex;
            leftChildIndex = 2*parentIndex+1;
            rightChildIndex = 2*parentIndex+2;
        }
        
        return ans;
    }
    
};