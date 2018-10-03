# MergeSort

Merge Sort is a Divide and Conquer algorithm. It divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, p, q, r) is key process that assumes that arr[p..q] and arr[q+1..r] are sorted and merges the two sorted sub-arrays into one.

The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.

## Algorithm

#### QuickSort : 
```
MergeSort(arr[], p,  r)
If r > p
     1. Find the middle point to divide the array into two halves:  
             middle q = (p+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, p, q)
     3. Call mergeSort for second half:
             Call mergeSort(arr, q+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, p, q, r)
```

## Explanation

First, the **MergeSort** function divides the arrays into half and calls itself recursively on both the halves till size of sub-arrays becomes one. Then the **merge*** function starts merging the sub-arrays back together in sorted order. While comparing two sub-arrays for merging, the first element of both lists is taken into consideration. While sorting in ascending order, the element that is of a lesser value becomes a new element of the sorted list. This procedure is repeated until both the smaller sub-arrays are empty and the new combined sublist comprises all the elements of both the sub-arrays.



#### Complexity

 - Worst Case : O(nLogn)
 - Best Case : O(nLogn)
 - Average Case : O(nLogn)
