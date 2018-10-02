# QuickSort

QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. Different versions of Quicksort choose the pivot in different ways : 
 - Always choose first element as the pivot (implemented here)
 - Always choose last element as the pivot
 - Choose the middle element as the pivot
 - Choose the pivot randomly

The key process in quickSort is partition(). Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.
## Algorithm

#### QuickSort : 
```
 // low - starting index , high - ending index
 quickSort(arr[], low, high){
    if (low < high){	
	    // pi is the partition index
	    pi = partition(arr, high, low)
	    // arr[pi] is  now at the right position
		quickSort(arr, low, pi - 1)
 		quickSort(arr, pi + 1, high)
 	}
 }
```

#### Partition Algorithm (Choosing first element as pivot) : 
```
 partition(arr[], low, high){
	 // pivot element
 	 pivot = arr[low]	
 	 // index where bigger elements will be placed
     i = high + 1
	 for(j = high; j >= low + 1; j--){
 		if (arr[j] >= pivot){
		   i--;
		   swap arr[i] and arr[j]
		}
	 }
     swap arr[i - 1] and arr[low]
     return i - 1
 }
```
## Explanation

We pass the array along with starting and ending index to the **quickSort** function which in turn passes them to the **partition** function. Now we start with the rightmost element and move towards the pivot. If we find any element greater than the pivot, we swap it with arr[i]. At the end all the elements bigger than pivot are at and to the right of i and the elements smaller than pivot to the left of i. At this point we simply swap the pivot and arr[i - 1] so the pivot is put in its right position in the array. We then return this position which **quickSort** saves as pi and then recursively calls itself twice, once for the left and once for the right part of the array. At the end we get the sorted array.

#### Complexity

 - Worst Case : O(n<sup>2</sup>)
 - Best Case : O(nLogn)
 - Average Case : O(nLogn)
