# Structures
A structure, is basically a collection of elements of ***Same/Different*** data types. <br />
More formally, A struct in the C programming language (and many derivatives) is a composite data type declaration that defines a physically grouped list of variables to be placed under one name in a block of memory, allowing the different variables to be accessed via a single pointer, or the struct declared name which returns the same address. 
## Why structures over array?
An array is a collection of elements of same data type. Using an array to solve real world problems is not logical as the data that the user may want to store can contain elements of many different data types, such as integer, float, character, string.... and the list goes on. <br />
Therefore,<b> using structures over array is a more logical choice as it provides more flexibility to store more diverse data in a single functional unit </b>
## Declaration
The general syntax for a struct declaration in C is: <br />
```c
    struct tag_name {
        type member1;
        type member2;
        /* declare as many members as desired, but the entire structure size must be known to the compiler. */
    };
```
Using structures is the first step we take to store and solve real world problems using code.

## Nested Structures
Nested structure in C is nothing but structure within structure. One structure can be declared inside other structure as we declare structure members inside a structure.<br />
The structure variables can be a normal structure variable or a pointer variable to access the data. You can learn below concepts in this section.<br />

### Nested structures declaration
 * Way #1
 ```c
    struct date
    {
        int date;
        int month;
        int year; 
    };

    struct Employee
    {
        char ename[20];
        int ssn;
        float salary;
        struct date doj;
    }emp1;
 ```
 * Way #2
 ```c
    struct Employee
    {
        char ename[20];
        int ssn;
        float salary;
        struct date
        {
            int date;
            int month;
            int year; 
        }doj;
    }emp1;
 ```

### Index
  1. [Example of using structure in C language](struct.c)
  2. [Making n instances of structure using arrays](nstruct.c)
  3. [Pass structure as function arguement (call by value)](structinfunVal.c)
  4. [Pass structure as function arguement (call by reference)](structinfun.c)
  5. [Read the data for n students using structures<br/> 1. Display number of students along with regno who scored centum in maths<br/> 2. Number of students along with regno who failed in all three subjects](practiseStruct.c)

### Assignment
WAP A C program to read the employee details and calculate and display the employee details along with his/her gross pay, given that,
```c
    gross = bp + 80%DA - 3%PF - 5%LIC
```
Your structure can contain the following elements
  * emp_number
  * emp_name
  * emp_designation
  * basic_pay
  * pf (provident fund)
  * da (dearness allowance)
  * gross pay

[Go Back](./..){: .btn}
