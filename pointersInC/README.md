## Concept Of Pointers
Every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator, which denotes an address in memory.
### What are Pointers?
A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address.
### Consider the following example
```
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

## Index

  1. [Pointers](pointer.c)
  2. [Call by reference](swapUsingPointer.c)