# JumpSearch

Jump Search is a searching algorithm for **sorted arrays**. The basic idea is to check fewer elements by jumping ahead by fixed steps or skipping some elements in place of searching all elements. For example, suppose we have an array arr[] of size n and block (to be jumped) size m. Then we search at the indexes arr[0], arr[m], arr[2m]…..arr[km] and so on. Once we find the interval (arr[km] < x < arr[(k+1)m]), we perform a linear search operation from the index km to find the element x.


### What is the optimal block size to be skipped?

In the worst case, we have to do n/m jumps and if the last checked value is greater than the element to be searched for, we perform m-1 comparisons more for linear search. Therefore the total number of comparisons in the worst case will be ((n/m) + m-1). The value of the function ((n/m) + m-1) will be minimum when m = √n. Therefore, the best step size is m = **√n**.	

## Algorithm

#### JumpSearch : 
```
jumpSearch(arr[], n,  x){  	// arr -> array, n -> size of array, x -> the element to find

	a = 0
	b = sqrt(n)

	while(arr[min(b, n) - 1] < x){
		a = b
		b = b + sqrt(n)
		if a >= n
			return element_not_found
	}

	while(arr[a] < x){
		a++
		if a == min(b, n)
			return element_not_found
	}

	if arr[a] == x
		return a
	else
		return element_not_founds

}

```

## Explanation

The array *arr* is a **sorted array**. We initialize two variables, *a* to store starting and *b* for the ending point of current block of array which we have taken square root of *n*. Till the element at ending point *b* or array end *n* is less than the element *x*, we keep on moving to next block and if a exceeds *n*, it means *x* isn't present in the arr. But if at some point, element considered is greater than *x*, it means *x* is present in previous block of array elements. We then begin from the previous starting point *a* and perform linear search upto *b*, returning index of the element *x* in the array *arr*, if found else we return another value for not found, typically -1.



#### Complexity

Time Complexity : O(√n)
