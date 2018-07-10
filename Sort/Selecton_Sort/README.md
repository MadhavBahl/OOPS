# Selection Sort

Selection sort is a sorting algorithm, specifically an in-place comparison sort. It has O(n2) time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.



## Algorithm
```
Step 1 − Set min to index 0
Step 2 − Search the minimum element in the array
Step 3 − Swap with value at the location min
Step 4 − Increment min to point to next element
Step 5 − Repeat until array is sorted
```



## Explanation

The algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.
#### Complexity
Worst Case:	О(n2)

Best Case:	О(n2) 

Average Case:	О(n2)



## [Selection Sort C/C++ Implementation](Selection_Sort.c)
