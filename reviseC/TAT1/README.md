# TEST YOUR SKILLS

## Take-A-Test 1

### Question 1 -- Second Smallest Number

Given a set of n elements, write a program to find the second smallest number in that set.
[**See Answer**](ques1.cpp)

### Question 2 -- Euclids Algorithm

Find the GCD of two given numbers using euclids algorithm
[**See Answer**](ques2.c)

### Question 3 -- Self power or mth power

Given two number ‘n’ and ‘m’, write a C++ function to find Sum. Where Sum = 1m+2m+3m+...+nm, when m > 0 and Sum = 1^1+2^2+3^3+...+n^n when m = 0.

For example, when n = 5 and m = 3, Sum = 1^3+2^3+3^3+4^3+5^3 = 225 and when n = 5 and when m = 0, Sum = 1^1+2^2+3^3+4^4+5^5 = 3413.

**Boundary Conditions**

0≤n,m≤10

**Input Format**

First line of input contains an integer, n

Second line of input contains an integer, m

**Output Format**

Contains either the value of Sum if the given input satisfies the boundary conditions and ‘Invalid input’ otherwise.

[**See Answer**](ques3.cpp)

### Question 4 -- Subject of the first hour

Time table of students in a schools has the following subjects and represented by a letter:

```
E - English

P - Physics

C - Chemistry

M - Maths

R - Computer Science
```

Assume the current day is Sunday. Given first hours of weekdays from Monday to Friday and a number ‘n’, write a C++ function to print the first hour of ‘nth’ day. Odd Saturdays from today are working days and even Saturdays are holidays and Sundays are always holidays. First hour of an mth odd Saturday is first hour of (m%5)th day of week.

**Example 1**
If first hours of Monday to Friday are given as P, C, M, R, E and the value of n is 15. Weekday for n as 15 is 1 which corresponds to Monday, so print the subject of first hour as Physics.

**Example 2**
If first hours of Monday to Friday are given as P, C, M, R, E and the value of n is 13. Weekday for n as 13 is 6 which corresponds to Saturday and it is Second Saturday, so print the subject of first hour as Holiday.

[**See Answer**](ques4.cpp)

### Question 5 -- Recursive fibonacci

Write a recursive function to find and print fibonacci series till the entered number n.

**Input Format**

value of n.

**Output Format**

fibonacci series till n.