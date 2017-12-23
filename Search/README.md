# Searching Algorithms
In computer science, a search algorithm is any algorithm which solves the Search problem, namely, to retrieve information stored within some data structure, or calculated in the search space of a problem domain.

### Some commonly used searching algorithms
  1. [Linear Search](linear.c)<br />
<b>`Algorithm`</b>
```
STEP 1: Initialize the position variable as -1
STEP 2: Start from the leftmost element of array and one by one compare x with each element of array
STEP 3: If x matches with an element, store the value of index in position variable
STEP 3: If the final value of position variable is -1 => the element does not exist
```
  2. [Binary Search]()
<b>`Algorithm`</b>
```
STEP 1: Sort the given array in ascendinig order (if descendinig, then change accordingly the 3b and 3c steps)
STEP 2: Compare x with the middle element, 
STEP 3a: if x matches with middle element, we return the mid index.
STEP 3b: Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
STEP 3c: Else (x is smaller) recur for the left half.
```
  3. [Jump Search]()
  4. [Interpolation Search]()
  5. [Exponential Search]()
  