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

## 5 Characteristics of OOP
  * Data Encapsulation
  * Data Abstraction
  * Polymorphism
  * Inheritence
  * Modularity

## Polymorphism
Polymorphism (Looking alike but exhibit different characteristics).In C++, polymorphism can be either
static polymorphism or
dynamic polymorphism
<br />
C++ implements static polymorphism through
overloaded functions
overloaded operators
<br /><br />
Three ways of achieving overloading in C++
  * Function Overloading
  * Operator Overloading
  * Dynamic Binding

## Overloading
A name having two or more distinct meanings<br />
**Function Overloading** -- A function having two or more distinct meaning
**Operator Overloading** -- When two or more distinct meanings are defined for a single operator
<br /> For example -- '-' can be unary as well as binary, '*' is used for multiplication as well as pointers

[See Example](funOver.cpp)

#### Signature
Combination of function's name and its parameter types (in order).
Or, a function's arguement list is known as the function's signature. Overloaded functions are distinguished by their signatures

Signature is only on the parameter's, **NOT** on the return type

## Function Overloading -- Finding the best match
A call to an overloaded function is resolved to a particular instance of the function, there are three possible cases, a function call may result in:<br />
  * **One Match** - A match is found for the function call
  * **No Match** - No match is found for the function call
  * **Ambiguous Match** - More than one defined instance for the function call.

## Match Techniques
### Exact Match
For example, there are two functions with same name afunc:
<br/>	void afunc(int);
<br/> void afunc(double);
The function call afunc(0);
is matched to void afunc(int); and compiler invokes corresponding function definition
as 0 (zero) is of type int
### Match through promotion
If no exact match is found, an attempt is made to achieve a match through promotion of the actual argument.
Recall that the conversion of integer types (char, short, enumerator, int) into int - integral promotion
<br />
For example, consider the following code fragment:<br/>
	void afunc (int);<br/>
	void afunc (float);<br/>
	afunc (‘c’);
Will invoke afunc(int)

## Constructors and Destructors
## Constructors
A constructor is a special member function whose task is to initialize the objects of its class. It's name is same as the name of the class.
The constructor is invoked whenever an object of it's associated class  is created.<br />
It is called constructor because it constructs the values of data members of the class.
<br />**Example**
```cpp
class add {
    int m,n;
  public:
    add (void);
};

add::add(void) {
    m=0;
    n=0;
}
```

### Parameterized Constructors
When a constructor is parametrized, we must pass the initial values as arguements to the constructor function.

### Copy Constructor
A copy constructor is used
```cpp
sample::sample (sample &i) {
    a=i.a;
    b=i.b;
}
```

#### Multiple constructors in a class
* constructor overtloading is possible in c++.
* Default arguement constructors are allowed `A::A(int x=0)`

[See an example here](copy.cpp)

## Destructor

A destructor is used to destroy the objects that have been created by a constructor
Destructor never takes any arguements nor returns any value
It will be invoked implicitly by the compiler upon exit from the program (or any block/function).

## Function calling methods
1. Call by Value
2. Call by Address
3. Call ny Reerance

## Dynamic memory Allocation in C++
C++ has two new operators apart form malloc() and calloc(), called `new` and `delete`

### New and delete in C++
Similar to malloc and free in C
But there is an option to initialize memory
Can be used allocate memory for single or array of elements
If memory is available, the new operator allocates memory space for the requested object/array, and returns a pointer to (address of) the memory allocated.
If sufficient memory is not available, the new operator returns NULL.
Dynamically allocated object/array exists until the delete operator destroys it

[1. Dynamic Memory Allocation](dynAlloc.cpp)
[2. Dynamic Memory Allocation for Arrays](dynamicArray.cpp)
[3. Dynamic Memory Allocation for Objects](dynamicObject.cpp)

## UML Diagram
UML, Unified Modeling Language, is a standard notation for the modeling of real-world objects as a first step in developing an object oriented program. It describes one consistent language for specifying, visualizing, constructing and documenting the artifacts of software systems.

### Graphs 
Most UML diagrams are graphs containing nodes connected by paths. The information is mostly in the typology, not in the size or placement of the symbols. There are three kinds of visual relationships that are important:

1. Connection (usually lines)

2. Containment (2D shapes with boundaries)
3. Visual attachment (one object being near another)

UML notation is intended to be drawn on a 2D surface.

There are basically four kinds of graphical constructs used in the UML notation:

* Icons – an icon is a graphical figure of a fixed size and shape. It does not expand to hold contents. Icons may appear within area symbols, as terminators on paths or as standalone symbols that may or may not be connected to paths

* 2D symbols – Two dimensional symbols have variable length and width and they can expand to hold other things, such as lists, strings or other symbols. Many of them are divided into compartments of similar or different kinds. Dragging or deleting a 2D-symbol affects its contents and any paths connected to it.

* Paths – Sequences of line segments whose endpoints are attached. Conceptually, a path is a single topological entity, although its segments may be manipulated graphically. A segment may not exist apart from his path. Paths are always attached to other graphic symbols at both ends (no dangling lines). Paths may have terminators, which are icons that appear in some sequence on the end of the path and that qualify the meaning of the path symbol.

* Strings – Present various kinds of information in an "unparsed" form. UML assumes that each usage of a string in the notation has a syntax by which it can be parsed into underlying model information. For example, syntaxes are given for attributes, operations and transitions. Strings may exist as singular elements of symbols or compartments of symbols, as elements in a list as labels attached to symbols or paths, or as stand-alone elements in a diagram.

![image](https://user-images.githubusercontent.com/26179770/35623206-ad90c60a-06b0-11e8-82d8-d3153fef1403.png)

### Relationships
Each object has various attributes. An attribute is a name/value pair. For example, my age is 22. The attribute name is "age", the value is "22". Objects also have behavior. I can stand, walk, sleep etc.

### Sample UML for railway reservation system
![image](https://user-images.githubusercontent.com/26179770/35623448-b2af1a50-06b1-11e8-8f15-ec46ab78e2b2.png)


#### Why using namespace std?
`cout` is one of the standard classes, which should be accessed be `std::cout`, to ease the process of writing code we write `using namespace std;`

## Ready To Test Your Skills

If you think you are ready to test your skills, [Click Here](./classTest)


### Sample Programs
  1. [Sample Program for Classes and Object 1](./IntroToOOPS.cpp)
  2. [Sample Program for Classes and Object 2](./class1.cpp)
