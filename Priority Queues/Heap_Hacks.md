# HEAP HACKS

1) Heap are of two types : 
 
* Min Heap

* Max Heap

2) Identifying Heap Questions : Jis Jis Question mai k+ smallest/ largest dia hoga vo heap se hoga.

* Smallest -> Max Heap (kyuki smallest niche hoga max elements uper honge to faltu pop hote jayenge)

* Largest  -> Min Heap ( vice versa )


Time Complexity sorting ki ```nlogn best se nlogk``` mai convert ho jati hai using heap, kyuki ```k``` ka significance hota hai
and ```k``` is size of heap.


# CODE BASICS

## USING STL


```

FUNCTIONS PRESENT IN PRIORITY QUEUE STL.  

Note 1 : Is present with the header file #include<queue>.

Note 2 : Is present inside 'priority_queue' class.

Note 3 : By Default it is present as Max Priority Queue.

  function we created ----------------  function in STL
1) isEmpty()           ----------------  empty()
2) getSize()           ----------------  size()
3) insert(element)     ----------------  push(element)
4) getMax()            ----------------  top()              <---> will give max as default beacuse max heap
5) removeMin()         ----------------  void pop()         <---> will not return anything, top ki help se pele store karna hoga


1) MAX HEAP (default)

priority_queue<int> pq;

2) MIN HEAP

priority_queue<int, vector<int>, greater<int>> pq;

Explanation :

        int          ---> specifies the datatype in PQ 
        
        vector<int>  ---> specifies the container because we know ki hamne PQ banane k lie vector 
                          container use kia jiska data type int hai
                       
                          (container yaha isleye specify kare kyuki default mai use pata hai kaise
                          implement kia but yaha it needs specification)
        
        greater<int> ---> is like comparator which specifies swapping when parent > child, which is 
                          the case for Min Heap.




```

3) Some times pair will be needed, and har jagah data type ki jagah pair class lagana padega uske lie easy solution is to create type defintion and then use har jagah use ppi.


```
typedef pair<int, pair<int, int>> ppi ;
```

  
