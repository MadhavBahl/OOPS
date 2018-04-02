# Test your skills in OOPS

## Problem 1: Playing Cards

French playing cards is the most common deck of playing cards used today. In a pack,there are totally 54 cards. It includes thirteen cards of each of the four French suits: clubs (♣), diamonds (♦), hearts (♥) and spades (♠).

Each card has the following printed on it:

(i) Value in the card

(ii) Suit Symbol

Design a class to represent, a french card and provide functions to check if two cards has same value, two cards have same suite and a function to print the suite color of the card.

Value of the card is given as a character (A, 2 to 9, T, K, Q, J, O)

```
A - Represents Ace equivalent to 1

2 to 9 - Represent cards with value 2 to 9

T - Represent cards with value 10

K - Represent cards with king

Q - Represent cards with queen

J - Represent cards with jack

O - Represent cards with joker

(ii) Suite of the card is given as either one of the following: clubs, diamonds, hearts, spades

```

**Input Format**

First line contains a letter representing the value of the first card

Second line contains the suite of the first card

Third line contains a letter representing the value of the second card

Fourth line contains the suite of the second card

**Output Format**

In the first line, print ‘Same value’, if the value of the cards are same or print ‘Same suite’, if the suite of the cards are same

In the second line, print color of the suite of the first card. Print ‘red’ if the suite is diamonds or hearts and print ‘black’ if the suite is clubs or spades

[**See Answer**](sample1.cpp)

## Problem 2: Let's raise exceptions

A leather manufacturing company maintains a DB with the details of their employees. The details maintained are name, employeeid, age. Age of the employees in the company can only be 18 to 50. Write a C++ function to read the details of employees from user, the function should print the details if it is valid.

When age < 18, raise an integer exception and print ‘Age cannot be less than 18’

When age > 50, raise a character exception and print ‘Age cannot be greater than 50’

#### Example 1

If the details entered are Ramu, E123 and 25 then print the details ramu, 123 and 25, one in each line.

#### Example 2

If the details entered are Ramu, E123 and 15 then raise an exception and print ‘Age cannot be less than 18’.

#### Example 3

If the details entered are Ramu, E123 and 55 then raise an exception and print ‘Age cannot be greater than 50’.

**Input Format**

First line contains name of the employee

Second line contains employee ID of the employee

Third line contains age of the employee

**Input Format**

Print either the details of the employee entered. One detail in each line or print ‘Age cannot be less than 18’ or ‘Age cannot be greater than 50’ when invalid age is entered

[**See Answer**](sample2.cpp)

## Problem 3: Heronian triangle

In geometry, a Heronian triangle is a triangle that has side lengths and area that are all integers. Heronian triangles are named after Hero of Alexandria. Design a class to represent a triangle and provide functions to calculate perimeter of triangle, area of triangle and a function to check if the given triangle is Heronian triangle.

#### Boundary conditions

Sides a,b,c are integers and the values are given such that they can be sides of a triangle

Note:

Given sides of the triangle a,b and c, area of the triangle, S is calculated as:

![image](https://user-images.githubusercontent.com/26179770/36069840-91c6a5ac-0f16-11e8-9100-d5d03cfcc6e6.png)

Print only two decimal places when the area is not an integer and print only integral part when decimal part of area is zero.

If you have a float variable, f and you want to print only two decimal places then write cout with manipulators as shown below:

 

Include iomanip namespace in the top of the file:

#include <iomanip>

And include the line below

cout<<fixed<<setprecision(2)<<f;

Setprecision automatically ceils the last digit printed when the next digit of the floating point value is greater than or equal to 5.

**Input Format**

First line contains an integer corresponding to side 1 of triangle, a

Second line contains an integer corresponding to side 2 of triangle, b

Third line contains an integer corresponding to side 3 of triangle, c

**Output format**

First line should contain the perimeter of the triangle

Second line should contain the area of the triangle

Third line contains Yes or No. Print Yes when the given triangle is Heronian triangle and Print No otherwise

[**See Answer**](sample3.cpp)

## Problem 4: Same local network

![image](https://user-images.githubusercontent.com/26179770/37647194-acc2c9f0-2c51-11e8-8d0f-230c9f39b283.png)

![image](https://user-images.githubusercontent.com/26179770/37647207-b7e068f6-2c51-11e8-809d-36eead6846aa.png)

[**See Answer**](sample4.c)

## Problem 5: Cyclic Right Shift Of Elements

![image](https://user-images.githubusercontent.com/26179770/37957200-fcb5ed60-31ca-11e8-9bf9-3eaea4c6deb9.png)

[**See Answer**](sample5.c)

## Problem 6: Boarding Pass

Generate boarding pass for the passengers of a ship which starts from Chennai to Andaman. The boarding pass must be generated automatically with a pass number that begins with "CA" and followed by a number that is automatically incremented from value 'x', details like passenger name, age, mobile number, address, date of journey and fare. There is a seasonal discount based on the age of the passengers. Write a non member function called discount which calculates the discount in the fare for the passenger with the following discounts. For the age group `between 12 and 58, both inclusive’ there is 20% discount in the fare, for the age group ‘above 58’, there is 40% discount and for the children (age under 12), 50% discount. Write a C++ program to generate pass for 'n' users. 

### Input Format

- Passenger name Value of 'x' 

- Age 

- Address 

- date_of_Journey 

- mobile number Original  

- Fare 

### Output Format

- passenger name 

- Boarding pass number 

- age 

- date_of_Journey 

- mobile number 

- Total fare after discount based on age 

[**See Answer**](sample6.cpp)

## Problem 6: Customer Discount

![image](https://user-images.githubusercontent.com/26179770/38207509-bd88f910-36cb-11e8-8179-2cb3f1d171bf.png)

![image](https://user-images.githubusercontent.com/26179770/38207534-d9c1fa0a-36cb-11e8-8bcb-ca749d513268.png)

[**See Answer**](sample7.cpp)