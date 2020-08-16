# Stack

* Identification of Problem 

  1) Arrays k question mai stack use ho skta hai
  
  2) Dependent O(n2) loops like
  
     ```
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<i;j++)
          {
          
          }
     }
     
     here j is depending upon i.
     
     Some more situations can be like :
     
     j -> 0 to i j++
     j -> i to 0 j--
     j -> i to n j++
     j -> n to i j--
     
     
     tab ese cases mai Stack 100% lagne k chances hai for a better solution/ improvised version.
     
     Brute force ki O(n2) ki complexity reduce ho skti hai using stacks.
     ```
     
     


  
