<b>OOP</b> is an approach to program organizational and development that attempts to eliminate some of the pitfalls of proceedural programming.<br />

# Proceedure oriented programming
  * Conventional programming using high level languages COBOL, FORTRAN, C etc.
  * The problem is viewed as a sequence of things to be done
  * The primary focus is on functions
  * It consists of writing a list of instructions for the computer to follow and organizing these instructions into groups known as functions
  * To revise a data structure, we also need to revise all functions that access the data
  * This approach does not model real world problems

## Characteristics of Proceedural Programming
  * Large problems divided into smaller sub problems called functions

## Drawbacks of proceedural programming
There are some issues in Proceedural programming paradigm
  * This approach does not model real world problems
  * Data can not be classified into private and public
  * Most of the functions share global data
  *

# Object Oriented Programming

## Why OOP
Object Oriented Programming has a capability of programming/coding (more precisely, MODELLING) any(most of) real world scenarios.
<b>Note* </b> C++ is not purely object oriented, JAVA is a purely object oriented programming language

## Major advantages of OOP
  * OOP treat data as a critical element in the program development and does not allow it to flow freely around the system
  * Emphasis is on data rather than proceedure
  * Data is hidden and can not be accessed by unauthorized external functions
  * Programs are divided into objects
  * It is based on grouping data (called data members) and related functions (called member functions) into a bigger model called a ***class***
  * Class is a blueprint of object. It is designed in such a way that it characterizes the objects
  * It ties data more closely to the functions that operates on it, protects it from accidental modifications fro outside functions
  * OOP allows decomposition of a problem into a number of entities called objects and then build data freely around these objects
  * Data of an object can be accessed only by the functions associated with that object
  * Functions of one object can access the functions of another objects

## 5 Characteristics of OOP
  * Data Encapsulation
  * Data Abstraction
  * Polymorphism
  * Inheritence
  * Modularity

### Classes

### Objects

### Class Diagrams

### Syntax
```cpp
#include<iostream>
using namespace std;

class abc
{
    int a,b;
  public:
    void add(int a, int b) // Inline Function -- Member function defined inside the class
    {
        cout<<a+b;
    }
    void subtract(int a, int b);
};

void abc::subtract(int a, int b) // Member function defined outside the class
{
    cout<<a-b;
}

int main() {
    abc x;
    x.add(5,10);
    x.subtract(20,10);
    return 0;
}

```

## Functions and Inline functions
Objective of using functions in a program is to save some code memory space, increase modularity, good and neat software design.
But,

### Inline functions
If a function is inline, the compiler places a copy of the code
<br />
<b>`Example`</b>
```c
    inline int maxim( int x, int y ) {
        return (x>y)? x : y;
    }
```

### Default arguements
A default arguement is a value provided in function declaration, which is automatically assigned by the compiler if the caller does not pass in that value.


#### Why using namespace std?
`cout` is one of the standard classes, which should be accessed be `std::cout`, to ease the process of writing code we write `using namespace std;`

### Sample Programs
  1. [Sample Program for Classes and Object 1](./IntroToOOPS.cpp)
  2. [Sample Program for Classes and Object 2](./class1.cpp)

[Go Back](./..){: .btn}
