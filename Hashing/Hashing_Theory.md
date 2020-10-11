# HASHING

Hashing in C++ can be done using containers, the 4 main contasiners are- 
1) set
2) unordered_set
3) map
4) unordered_map



## 1) set

1) Each element has to be unique.
2) The value once added in set can't be modified.
3) Used in use case where we need to check if element is present in list or not.
4) Can be used in problem related to sorted as elements in set are arranged in sorted order.
5) Time Complexity of set is O(log n).

```
SOME BASIC FUNCTION OF SET :
1) begin() – Returns an iterator to the first element in the set.
2) end() – Returns an iterator to the theoretical element that follows last element in the set.
3) size() – Returns the number of elements in the set.
4) insert(val) – Inserts a new element val in the Set.
5) find(val) - Returns an iterator pointing to the element val in the set if it is present else points to the end value of iterator.
6) empty() – Returns whether the set is empty.


IMPLEMENTATION:



// C++ program to illustrate hashing using set in CPP STL

#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
    // empty set container 
    set <int> s;         
    
    // List of elements
    int arr[] = {40, 20, 60, 30, 50, 50, 10};
    
    // Insert the elements of the List to the set
    for(int i = 0; i < 7; i++)
        s.insert(arr[i]);

    // Print the content of the set the elements of the set will be sorted without any duplicates
    
    cout<<"The elements in the set are: \n";
    for(auto itr=s.begin(); itr!=s.end(); itr++)
    {   
        cout<<*itr<<" ";
    }
    
    // Check if 50 is present in the set else it points to the end of iterator
    if(s.find(50)!=s.end())
    {
        cout<<"\n\n50 is present";
    }
    else
    {
        cout<<"\n\n50 is not present";
    }
    
    return 0; 
}

```

## 2) unordered_set
1) Values stored in unordered fashion.
2) Only unique value are stored.
3) The time complexity of unordered_set is O(1).

```
IMPLEMENTATION :


// C++ program to illustrate hashing using unordered_set in CPP STL

#include <iostream> 
#include <unordered_set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
    // empty set container 
    unordered_set <int> s;         
    
    // List of elements
    int arr[] = {40, 20, 60, 30, 50, 50, 10};
    
    // Insert the elements of the List to the set
    for(int i = 0; i < 7; i++)
        s.insert(arr[i]);

    // Print the content of the unordered set,The elements of the set will not be sorted without any duplicates
    
    cout<<"The elements in the unordered_set are: \n";
    for(auto itr=s.begin(); itr!=s.end(); itr++)
    {   
        cout<<*itr<<" ";
    }
    
    // Check if 50 is present in the set
    if(s.find(50)!=s.end())
    {
        cout<<"\n\n50 is present";
    }
    else
    {
        cout<<"\n\n50 is not present";
    }
    
    return 0; 
} 

```

## 3) map

1) Stored Elements in Ordered way.
2) Key- Value Pair.
3) The complexiy of map container is O(log n)


```
SOME BASIC FUNCTION OF MAP :
1) begin() – Returns an iterator to the first element in the map.
2) end() – Returns an iterator to the theoretical element that follows last element in the map.
3) size() – Returns the number of elements in the map.
4) empty() – Returns whether the map is empty.
5) insert({keyvalue, mapvalue}) – Adds a new element to the map.
6) erase(iterator position) – Removes the element at the position pointed by the iterator
7) erase(const g)– Removes the key value ‘g’ from the map.
8) clear() – Removes all the elements from the map.


IMPLEMENTATION 


// C++ program to illustrate Map container

#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 

int main() 
{ 
    // empty map container 
    map<int, int> mp; 

    // Insert elements in random order 
    // First element of the pair is the key
    // second element of the pair is the value
    mp.insert(pair<int, int>(1, 40)); 
    mp.insert(pair<int, int>(2, 30)); 
    mp.insert(pair<int, int>(3, 60)); 
    mp.insert(pair<int, int>(4, 20)); 
    mp.insert(pair<int, int>(5, 50)); 
    mp.insert(pair<int, int>(6, 50)); 
    mp.insert(pair<int, int>(7, 10)); 

    // printing map mp 
    map<int, int>::iterator itr; 
    cout << "The map mp is : \n"; 
    cout << "KEY\tELEMENT\n"; 
    for (itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
            << '\t' << itr->second << '\n'; 
    } 

    return 0; 
} 

```
## 4) unordered_map

1) unordered fashion storage.
2) Complexity is O(1).

```
IMPLEMENTATION:


// C++ program to demonstrate functionality of unordered_map 
#include <iostream> 
#include <unordered_map> 
using namespace std; 

int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<string, int> umap; 

    // inserting values 
    umap.insert({"GeeksforGeeks", 10}); 
    umap.insert({"Practice", 20}); 
    umap.insert({"Contribute", 30}); 

    // Traversing an unordered map 
      cout << "The map umap is : \n"; 
    cout << "KEY\t\tELEMENT\n"; 
    for (auto itr = umap.begin(); itr!= umap.end(); itr++) 
      cout << itr->first 
            << '\t' << itr->second << '\n';
  
      return 0;
} 


```

