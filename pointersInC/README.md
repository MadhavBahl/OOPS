# Pointers
  * Every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator, which denotes an address in memory.
  * Variable that contains address in memory of another variable
  * We can have a pointer to any variable type
  * Unary or monadic operator & gives the `address of a variable`
  * operator * gives the `contents of an object pointed to by a pointer`
  * To declare a pointer to a variable :
```c
    datatype * name_Of_Variable;  
```
<b>EXAMPLE</b>
```c
    int num = 10;
    int *nump = &num;

    float data = 105.8;
    float *ptr;
    ptr = &data;
```

### Consider the following example
```c
    #include<stdio.h>
    int main() {
        int a=5;
        int *P;
        P=&a;
        temp=&P;
        printf("\naddress of a = value of P: %u",P);
        printf("\nValue of a: %d",a);
        printf("\nValue of *P: %d",*P);
    }
```

Here, 
  * P stores the memory address of a.
  * *P stores the value of a

### Dereferencing a pointer variable
```c
#include<stdio.h>
int main() {
    float data = 100;
    float *ptr = &data;
    printf("%x %f\n",ptr, *ptr);
    *ptr = 200;
    printf("%x %f\n",ptr, *ptr);
}
```
<b>NOTE**</b><br />
  * Never try to assign a specific integer value to a pointer variable, it can be disastrous. <br />
  * If a pointer is not initialized during declaration, it is wise to give it a `NULL` value. <br />
  ``float *ptr = NULL`` <br />
  * The NULL pointer is a valid address for any data type, but NULL is not memory address 0.
  * It is an error to dereference a pointer whose value is NULL, such an error may cause your program to crash, or behave erratically.

## Operations on pointer variables
  * Assignment<br />
        the value of one pointer variable can be assigned to another pointer variable of the same type
  * Relational Operations<br />
        two pointer variables of the same type can be compared for equality, and so on
  * Arithmetic Operations<br />
        integer values can be added to and subtracted from a pointer variable, value of one pointer variable can be subtracted from another pointer variable <br />
        Four arithmetic operators can be used on pointers: ++, --, +, and – <br />
        Consider that ptr is an integer pointer which points to the address 1000
        Assume 4 bytes are allocated for integers. After the following operation `ptr++` ptr will point to location 1004, On integer pointers -- will decrement by 4.

### Pointing to Array Elements
```c
#include<stdio.h>
int main() {
    int gradeList[8] = {92,85,75,88,79,54,34,96};
    int *myGrades = gradeList;
    printf("1st element of gradelist using array index: %d\n",gradeList[0]);
    printf("1st element of gradelist using pointer: %d\n",*myGrades);
    printf("2nd element of gradelist using array index: %d\n", *(myGrades + 1));
    printf("2nd element of gradelist using pointer: %d\n", myGrades[1]);
    printf("3rd element of gradelist using array index: %d\n", *(myGrades + 2));
    printf("3rd element of gradelist using pointer: %d\n", myGrades[2]);
    printf("4th element of gradelist using array index: %d\n", *(myGrades + 3));
    printf("4th element of gradelist using pointer %d\n", myGrades[3]);
    printf("5th element of gradelist using array index: %d\n", *(myGrades + 4));
    printf("5th element of gradelist using pointer: %d\n", myGrades[4]);
    return 0;
}
```

### Pointer to an Array and Array of Pointers
  * int (*a)[35]; - declares a pointer to an array of 35 ints. 
  * int *a[35]; - declares an array of 35 pointers to ints. 

## Memory Allocation Techniques
There are two techniques of allocating memory to a variable, <br />
  1. Static Memory Allocation
  2. Dynamic Memory Allocation

### Static Allocation
Allocation of memory space when execution begins.

### Dynamic Allocation
Allocation of memory space at run time.

## Dynamic Memory Allocation

### malloc()
  * Dynamically allocates memory when required
  * This function allocates ‘size’ byte of memory and returns a pointer to the first byte or NULL if there is some kind of error
  * Syntax: `void * malloc (size_t size);`
### calloc()
  * Used to allocate storage to a variable while the program is running
  * Syntax: `void * calloc (size_t n, size_t size);`
  * For example, an int array of 10 elements can be allocated as: `int * array = (int *) calloc (10, sizeof (int));`

#### Difference between malloc() and calloc()
  * Calloc allocates multiple blocks of data whereas malloc allocates as a single block 
  * Calloc initializes all bytes in the allocation block to zero

### realloc()
  * Modifies the allocated memory size by malloc () and calloc () functions to new size
  * If enough space doesn’t exist in memory of current block to extend, new block is allocated for the full size of reallocation, then copies the existing data to new block and then frees old block
  * Syntax: `void * realloc (void * ptr, size_t size);`
### free()
  * frees the allocated memory by malloc (), calloc (), realloc () functions and returns the memory to the system


## Index

  1. [Pointers](pointer.c)
  2. [Poiners on array](PointToArray.c)
  3. [Call by reference](swapUsingPointer.c)
  4. [Dynamic memory alllocation](malloc.c)

[Go Back](./..){: .btn}
