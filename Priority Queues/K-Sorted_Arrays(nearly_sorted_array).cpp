/*

K-Sorted Array - means array after sorting will be such that the elements in original array will
be k-1 distance away in sorted array w.r.t to there original position.

Valid K-sorted Array for k=3:

Before Sorting - 10 12 15 6 9
After Sorting  - 15 12 10 9 6

In-Valid K-Sorted Array for k=3 :

Before Sorting - 10 12 6 15 9
After Sorting  - 15 12 10 9 6

Although this array is sorted yet 9 shifts to postion which is more than k-1.


So k sorted array mai hum element ke k-1 left and k+1 right mai dekhte hai, not full array ko.
*/

#include<iostream>
using namespace std;
#include<queue>

void kSortedArray(int input[], int n, int k)
{
    priority_queue<int> pq;
    for(int i=0;i<k;i++)
    {
        pq.push(input[i]);
    } 
    
    int j=0; // for tracking element kidhar dalna hai
    
    for(int i=k;i<n;i++)
    {
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]); 
        j++;
    } 
    
    // n-k array sorted last k element still in heap so remove them too
    
    while(!pq.empty())
    {
        input[j] = pq.top();
        pq.pop();
        j++;
    }
    
    
}
int main()
{
    int input[] = {10,12,6,7,9};
    int k=3;
    kSortedArray(input,5,k);
    for(int i=0;i<5;i++)
    {
        cout<<input[i]<<" ";
    }
    
}