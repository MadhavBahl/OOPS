# Radix Sort

It is the sorting algorithm used by card-sorting machines in the earlier times. Radix sort is basically a digit by digit sort, which means we categories the number in 10 columns (0-9) and then place them one after the other and repeat it for all the digits. Radix sort works counter-intuitively by sorting on the least significant digits first. Since we need to maintain the order of the numbers in a column we get after each iteration we need a stable sorting algorithm and the one choice is Counting Sort.

## Algorithm
```
Step 1 - Set d to the highest-order digit.
Step 2 - Sort the input using counting sort (or any stable sorting algorithm)
         according to the ith digit (i = 1 to d).
```
### Counting Sort
```
Step 1 - Initialize a count array as 0(it's size should be greater than equal
          to the max element of the input array).
Step 2 - Traverse the input array and store the count of occurence of each number
          by incrementing the array index which is same as the number.
Step 3 - We find the number of inputs less than a particular number by keeping it's
          running sum.
Step 4 - Now traversing the array in the reverse order we reinsert the numbers into
          the array based upon the number of inputs less than the number which we got
          from the count array and decrement the value in the count array by one each
          time we encounter the same element.
```

 ## Explanation

The Algorithm uses the feature of stable sort to sort the elements. First, we sort all the elements based on their least significant digit, then by using the stability of counting sort to maintain the order of the elements we again perform this procedure on the next least significant digit and repeat this procedure until we reach the max. For ex:- Let the input be {35, 25, 42, 13}, now we will first sort the numbers, on the least significant digit by using counting sort to find the index of every number by using the [running sum](https://www.google.co.in/search?q=running+sum) of the count array and hence we have {42, 13, 35, 25} we see that the first digit is in sorted order and 35 comes before 25 due to the order of insertion, now on sorting the array on second digit we have {13, 25, 35 ,42}. Hence, the array is sorted.

#### Complexity
Worst Case:	О(n*d)

Best Case:	О(n) 


## [Radix Sort Implementation](RadixSort.cpp)
