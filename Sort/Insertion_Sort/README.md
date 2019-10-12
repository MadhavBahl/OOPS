# Insertion Sort

## [Insertion Sort C++ implementation](InsertionSort.cpp)

## ALGORITHM

  Step 1. Repeat Steps 2,3,4,and5 varying i from 1 to n-1
  Step 2. Set temp = arr[i]
  Step 3. Set j =i-1
  Step 4. Repeat until j becomes less than 0 or arr[j] becomes less than or equal to temp:
     a. Shift the value at index j to j+1
     b. Decrement j by 1
  Step 5. Store temp at index j+1

## Explantion 

 * To sort this list by using the insertion sort algorithm: 
   * You need to divide the list into two sublists, sorted and unsorted. 
   * Initially, the sorted list has the first element and the unsorted list has the remaining 4 elements.
   Pass 1
   * Place the first element from the unsorted list at its correct position in the sorted list.
   Pass 2
   * Place the first element from the unsorted list at its correct position in the sorted list.
   Pass 3
   * Place the first element from the unsorted list at its correct position in the sorted list.
   Pass 4
   * Place the first element from the unsorted list at its correct position in the sorted list.

## C/C++ Code
 
  ```
  void insertion_sort(int a[],int n)
  {
    int j,temp;
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;a[j]>temp && j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
  }
  int main()
 {
    int n;
    cout<<"Size of Array::";
    cin>>n;
    int a[n];
    cout<<"Enter Sequence::";
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    //insertion short
    insertion_sort(a,n);
    
    cout<<"Sorted Array::";
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //4 3 2 10 12 1 5 6
  }
  ```

