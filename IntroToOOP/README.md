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

#### Why using namespace std?
`cout` is one of the standard classes, which should be accessed be `std::cout`, to ease the process of writing code we write `using namespace std;`

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

## Exception handling

Preventing program/Software to crash in case of wrong inputs by throwing appropriate error messages/.

**try, catch and throw**

### TRY

```cpp
try {
    .
    .
    // Possibly an unexpected situation
    throw(val1);
    .
    .
    .
    // Possibly an unexpected situation
    throw(val2);
    .
    .
    .
}

catch (val1) {
    .. ..
    .. ..
    .. ..
}
catch (val2) {
    .. ..
    .. ..
    .. ..
}


catch (...) {    // catch(...) catches any throw

}
```

## Friend Function

A friend function is a function that can access the non-public members of a class, even though the function itself is not a member of the class.

### Doesn't it violate the concept of data hiding

The concepts of encapsulation and data hiding dictate that non-member functions should not be able to access an object’s private or protected data.
However, there are situations where such rigid discrimination leads to considerable inconvenience.
A friend function is a normal function with special access privileges.

### More about friend function

A friend function of a class is a non-member function of a class that has the right to access all private and protected (non-public) members of the class.
Friend function prototype should be placed inside the class definition (can be any where inside the class definition).
Friend function definition should be outside the class scope.
Even though the prototypes of friend functions appear in the class definition, friends are not member functions.

A friend function of a class can be a

  * function (non-member of a class)
  * member function of another class
  * function template

To declare a function as a friend of a class, precede the function prototype in the class definition with keyword friend.
Friend functions are used in Operator overloading to increase the versatility of operators.

### Syntax

```cpp
class ClassName  {
    // Some statements
    friend  returnType  functionName( arguments ); // friend function declaration
    // Some Statements
};
// friend function definition does not start with friend keyword
returnType  functionName( arguments )  {
    ... ... ...
// private and protected data of the above class can be accessed from this function
    ... ... ...
}
int main( ) {
    functionName( arguments ); // Call to the friend function
}
```

[**See a sample program**](friend.cpp)

### Difference between Friend function and Member function

|Member Function|Friend Functoon|
|--|---|
|It is invoked through an object|Not invoked through an object since it is a non-member of a class <br /> If the friend function of class X is a member function of class  Y, then it must be invoked through an object of class Y |
|Can access the non-public members of the class directly|Can access the non-public members of the class only through an object (since this pointer is not visible)|

## Friend Class

Member functions of a class X operate on the data members of Class X.
At times, we need a helper class to operate on non-public data members of the class X. In such circumstances, the helper class has to be treated as a friend of class X to access the non-public data members of class X.
So, a class can be a friend of another class

For example:<br />
If class Y is a friend of class X then <br />
All the member functions of class Y can access the non-public members of class X

### Friendship is not symmetric

If class Y is a friend of class X then
class X is not a friend of class Y

### Friendship is not transitive

If class X is a friend of class Y and If class Y is a friend of class Z then
class X is not a friend of class Z

### Syntax

```cpp

class employer;// forward declaration of class Y
class employee {
    ... ...
	friend class employer;// friend class declaration
	... ...
};
class employer {
// All the member functions of class employer can access non-public members of class employee using an object
};


```

## Operator overloading

C++ allows most of the operators within the language to be overloaded so that they work with classes.  This
- allows the language to be extended to cover new situations
- enhances program readability
- enhances program functionality
- is an essential components of C++ templates and the standard templates library

### Restrictions

The operators .  ::  ?:   sizeof  **may not** be overloaded.

All other operators can be overloaded

An operator is overloaded by writing a non-static member function definition or non-member
function definition as you normally would, except that the function name
starts with the keyword operator followed by the symbol for the operator being overloaded.

**For example**, the function name operator+ would be used to overload the addition operator (+)
for use with objects of a particular class.

[**Overloading binary addition operator**](opOver.cpp) <br />
[**Overloading unary subtraction operator**](opOverUnary.cpp) <br />
[**Overloading unary increment operator**](incrementOver.cpp) <br />
[**Overloading subscript operator**](incrementOver.cpp) <br />

## Inheritance

Inheritance means deriving qualities and characteristics from parents or ancestors. 

Inheritance in Object Oriented Programming can be described as a process of creating new classes from existing classes which will have the properties similar to that of parent classes.
Or simply, Inheritance is the process by which objects of one class acquire the properties of objects of another class in the hierarchy.

Subclasses provide specialized behavior from the basis of common elements provided by the super class. Through the use of inheritance, programmers can reuse the code in the super class many times.

Reusing existing code saves time and money and increases a program’s reliability.

![image](https://user-images.githubusercontent.com/26179770/36838639-b9c269e4-1d65-11e8-9c98-506477719a4d.png)

New classes can be built from the existing classes. It means that we can add additional features to an existing class without modifying it. The new class is referred as derived class or subclass and the original class is known as base classes or super class.

### Syntax

```cpp
class derivedClasas: accessSpecifier baseClass
```

## Access Specifiers

Access specifiers are (as the name suggests) specifiers which tell what should be the privacy of the content, and how much content wee can access.

Access specifier can be public, protected and private. The default access specifier for data members is private. Access specifiers affect accessibility of data members of base class from the derived class. In addition, it determines the accessibility of data members of base class outside the derived class.

## Inheritance Access Specifiers

### Public

This inheritance mode is used mostly. In this the protected member of Base class becomes protected members of Derived class and public becomes public.

### Protected

In protected mode, the public and protected members of Base class becomes protected members of Derived class.

### Private

In private mode the public and protected members of Base class become private members of Derived class.

## Types Of Inheritance

- [Single Inheritance](#single-inheritance)
- [Multiple Inheritance](#single-inheritance)
- [Multi Level Inheritance](#single-inheritance)
- [Hierarchical Inheritance](#single-inheritance)
- [Hybrid Inheritance](#single-inheritance)

### Single inheritance

One child class inherits one parent class

![image](https://user-images.githubusercontent.com/26179770/36835325-d9d905d0-1d5b-11e8-99f6-f53e93ed5a38.png)


[**See a sample program here**](./inheriance/single.cpp)

### Multiple Inheritance

When one child cass inherits properties of  more than one parent classes.
Simply, one subclass and many super classes form a multiple inheritance.

![image](https://user-images.githubusercontent.com/26179770/36891750-9fad27ec-1e28-11e8-9dd5-87b935688bd7.png)

[**See a sample program here**](./inheritance/multiple.cpp)

### Multilevel Inheritance

As the name suggests, in this type of inheritance, there are multiple levels of inheritance.  This is analogous to grand parents, then parents then children.

![image](https://user-images.githubusercontent.com/26179770/37459322-b018b41c-286d-11e8-9382-dc31f5690ccd.png)

Example:
![image](https://user-images.githubusercontent.com/26179770/37459129-2b6145f4-286d-11e8-83ee-bfcafe56f689.png)

[**See a sample program here**](./inheritance/multilevel.cpp)

### Hierarchical Inheritance

In this case the inheritance pattern forms a hierarchy, i.e., there are multiple derived classes of same base class.

![image](https://user-images.githubusercontent.com/26179770/37459413-f5d3db94-286d-11e8-9e82-c2675b36c8ac.png)

[**See a sample program here**](./inheritance/hierarchical.cpp)

### Hybrid Inheritance

Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.

![image](https://user-images.githubusercontent.com/26179770/37460441-3e203598-2871-11e8-9b7b-e3f1150aaf07.png)

[**See a sample program here**](./inheritance/hybrid.cpp)

## Diamond Problem

This is the problem arised in some cases of hybrid inheritance. In this problem a Derived class will have multiple paths to a Base class. This will result in duplicate inherited members of the Base class.

![image](https://user-images.githubusercontent.com/26179770/37461230-a6283a62-2873-11e8-8194-c30136e21f1d.png)

## Virtual Base Class

Virtual base class is used in situation where a derived have multiple copies of base class to avoid dreaded diamonds problem. <br>
reference: http://www.tutorialdost.com/Cpp-Programming-Tutorial/51-Cpp-Virtual-Base-Class.aspx

![image](https://user-images.githubusercontent.com/26179770/37461316-f3efedb2-2873-11e8-8a33-576936ccc2d2.png)


### Example without using virtual class

```cpp
#include<iostream.h>
#include<conio.h>

class ClassA
{
    public:
    int a;
};

class ClassB : public ClassA
{
    public:
    int b;
};
class ClassC : public ClassA
{
    public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
    public:
    int d;
};

void main()
{

    ClassD obj;

    obj.a = 10;        //Statement 1, Error occur
    obj.a = 100;       //Statement 2, Error occur

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout<< "\n A : "<< obj.a;
    cout<< "\n B : "<< obj.b;
    cout<< "\n C : "<< obj.c;
    cout<< "\n D : "<< obj.d;

}
```

**This will result in error**
Therefore, to avoid such situations, we use virtual class

### Example  with virtual base class

```cpp
#include<iostream.h>
#include<conio.h>

class ClassA
{
    public:
    int a;
};

class ClassB : virtual public ClassA
{
    public:
    int b;
};
class ClassC : virtual public ClassA
{
    public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
    public:
    int d;
};

void main()
{

    ClassD obj;

    obj.a = 10;        //Statement 1
    obj.a = 100;       //Statement 2

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout<< "\n A : "<< obj.a;
    cout<< "\n B : "<< obj.b;
    cout<< "\n C : "<< obj.c;
    cout<< "\n D : "<< obj.d;

}

Output :

        A : 100
        B : 20
        C : 30
        D : 40

```

Here, ClassD have only one copy of ClassA and statement 4 will overwrite the value of a, given in statement 3.

## Virtual Functions

There are many cases where there is a function declared in base class and then again declared in the child class, i.e., that function is overridden.
So basically, a virtual function a member function which is declared within base class and is re-defined (Overriden) by derived class.

Characteristics of virtual functions:

* Ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.

* Used to achieve dynamic/runtime polymorphism

* Functions are declared with a virtual keyword in base class.

* The resolving of function call is done at Run-time.

### Rules for virtual functions

* They Must be declared in public section of class.

* Virtual functions cannot be static and also cannot be a friend function of another class.

* Virtual functions should be accessed using pointer or reference of base class type to achieve run time polymorphism.

* The prototype of virtual functions should be same in base as well as derived class.

* They are always defined in base class and overridden in derived class. 

* It is not mandatory for derived class to override (or re-define the virtual function), in that case base class version of function is used.

* A class may have virtual destructor but it cannot have a virtual constructor.

[See a sample program here](./virtual.cpp)

## Pure Virtual Functions (Abstract Classes)

Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class.

[See a sample program here](./absract.cpp)

## Templates

Template is a kind of macro that supports the generic programming which allows to develop the reusable components.
It is one of the main features of object oriented language such as C++.
Actually, it allows the declaration of data items without specifying their exact data type.

## 2 Types pf templates

1. Function Templates
2. Class Templates

### Function Templates

Function templates are generic functions, which are operating on different data items. <br/>
They describe a function format that when instantiated with particulars generates a function definition, basically it acts like a template schema which can be used
for parameters with any datatype, instead of some fixed data type

* Avoids redifinition of function

* Makes code more reusable (write once, use multiple times)

The C++ language allows the compiler to generate multiple versions of a function by allowing parameterized data types and hence it supports the parameterized polymorphism.

The data items (types) are not declared while defining the function.

Once when the function call is made using appropriate data type, then the template function is transformed to operate on that specific data types.

#### Syntax

```cpp
template<class type>
returntype functionname(arguments)
{
    .......
    statements;
    .......
}
```

[See sample program 1 here](./template.cpp)
[See sample program 2 here](./tempAdd.cpp)

### Class Template

Generic classes with template data variables and template member functions

[See a sample program here](./classTemplate.cpp)

## Standard Template Libraries

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite  for working with STL.

## 4 components of STL

* Algorithms

* Containers

* Functions

* Iterators

### 

### Sample Programs
  1. [Sample Program for Classes and Object 1](./IntroToOOPS.cpp)
  2. [Sample Program for Classes and Object 2](./class1.cpp)
