# Interpolation Search
  
## Algorithm
```c
 STEP 1:In a loop, calculate the value of “pos” using the probe position formula. 
 STEP 2:If it is a match, return the index of the item, and exit. 
 STEP 3:If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right  sub-array. 
 STEP 4:Repeat until a match is found or the sub-array reduces to zero. 
 ```
---
## Explanation
 The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly    distributed. 
  Binary Search always goes to the middle element to check. 
  On the other hand, interpolation search may go to different locations according to the value of the key being searched. 
  For example, if the value of the key is closer to the last element, interpolation search is likely to start search toward the end side.
 
 
## [Interpolation search c++ implementation](Interpolation_search.cpp) 
