#include<iostream>
using namespace std;

void inplaceHeapSort(int pq[], int n)
{
    
    for(int i=1;i<n;i++)
    {
        int childIndex = i;
        
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
    
    int size =n ;
    
    // Remove Elements
   
    
    while(size > 1)
    {
        swap(pq[0],pq[size-1]);
        size--;
        
        
        // PERFORM DOWNHEAPIFY
        int parentIndex =0;
        
        // since the comparisions are to be made with both the left and the right child so both needed
        int leftChildIndex = 2* parentIndex+1;
        int rightChildIndex = 2* parentIndex+2;
        
        while(leftChildIndex < size) // checking the limits for leftChildIndex
        {
            int minIndex = parentIndex;
            if(pq[minIndex] > pq[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            
            if(rightChildIndex < size && pq[rightChildIndex]< pq[minIndex]) // before && condition -> only compare if right child exits 
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
        
    }
}
int main()
{
    int input[]={5,1,2,0,8};
    inplaceHeapSort(input,5);
    for(int i=0;i<5;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
    
}