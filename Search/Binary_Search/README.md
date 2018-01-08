# Binary Search

## Algoithm
```c
STEP 1: Sort the given array in ascendinig order (if descendinig, then change accordingly the 3b and 3c steps)
STEP 2: Compare x with the middle element, 
STEP 3a: if x matches with middle element, we return the mid index.
STEP 3b: Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
STEP 3c: Else (x is smaller) recur for the left half.
```

## [Binary Search C implementation](binary.c)
