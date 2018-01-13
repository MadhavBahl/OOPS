## Practise Structures and Functions

### Sample Problem 1 -- Find Potential Teammates
A game is conducted with ‘n’ players. Given the name, age and size of tube with each player and a player name ‘p’, write an algorithm and the C program to print name of all the players who can be partner of the player ‘p’. A player ‘q’ can be partner of player ‘p’ if the age of ‘q’ is less than player ‘p’ and tube size of player ‘q’ is greater than tube size of player ‘p’.
```
For example, given details of five salespersons as follows:

Name1, 34, 15

Name2, 23, 12

Name3, 45, 9

Name4, 19, 34

Name5, 32, 14

And player ‘p’ name as Name1. Name of players who can be partner of player ‘p’ are Name2, Name5.
```
 
<b>Input Format</b>
First line contains the number, n

Next n lines contain details of ‘n’ players such as name, age and size in order and separated by space

Next line contains the name of the player, p<br />
<b>Output Format</b>
Print all the name of players with age less than age of player p and tube size less than tube size of player p
<br /><br />
[Click here to see the answer](ques1.c)

### Sample Problem 2 -- Best sales person
A company stores the name, age and sales made in five cities of their salespersons, given the details of ‘n’ employees, write an algorithm and the C program to find the best sales person. Best sales person is the one who has made maximum sales in the company. For example given the details of six salespersons with the following details:
```
SP1, 34, 45, 18, 22, 38, 37

SP2, 32, 46, 15, 23, 35, 29

SP3, 29, 47, 16, 30, 35, 35

SP4, 31, 49, 12, 32, 36, 40

SP5, 23, 45, 11, 30, 35, 39

SP6, 29, 41, 15, 31, 33, 37
```
Then the best salesperson is SP4.

<b>Input Format</b>
First line contains the number of salespersons, n

Next n lines contain the details of ‘n’ salespersons such as name, age and sales made by the salesperson in five cities separated by space<br />
<b>Output Format</b>
Print the name of the best sales person
<br /><br />
[Click here to see the answer](ques2.c)

### Sample Problem 3 -- Recursive reverse string
Write a recursive ‘C’ program to print the reverse of the string.
<b>Input Format</b>
First line contains the string, S<br />
<b>Output Format</b>
Print reverse of string, S
<br /><br />
[Click here to see the answer](ques3.c)

### Sample Problem 4 -- Convert Base
A Quadadecimal number system is a hypothetical number system with base 14. The digits of the number system are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D. A decimal number ‘x’ can be converted to quadadecimal number by dividing it repeatedly by 14. The reminders obtained during division put together in reverse order form the quadadecimal equivalen of ‘x’. Decimal number 82 is converted to its quadadecimal equivalent (5C ) as follows:
![image](https://user-images.githubusercontent.com/26179770/34890904-aeb75460-f7f9-11e7-9ade-02a77544f9e8.png)

<b>Input Format</b>
First line contains the number n, in decimal number system<br />
<b>Output Format</b>
Print the quadadecimal equivalent of number, n
<br /><br />
[Click here to see the answer](ques4.c)

### Sample Problem 5 -- Amount remaining after shopping
Sherley goes for a shopping to a mall ‘M1’ . She uses credit card of bank ‘ABC’ for her purchases. Account details of each customer of ‘ABC’ contain Account holder name, Account number and Balance. Details of customers of mall ‘M1’ includes customer name and list of items purchased and cost of the items. Given the details of ‘n’ customers of bank ‘ABC’ and the purchase details of ‘m’ customers to mall ‘M1’, design an algorithm and write a C program to print the name of items purchased by Sherley and the balance amount in the account of Sherley in the bank ‘ABC’.

```
For example, if details (Name, Account number, Balance) of six customers of bank are given as follows:

Raju 12356 1000.00

Sam 12789 980.00

Ram 13457 975.50

Sherley 16789 1500.00

Sheela 17890 1345.50

Kamala 12378 2567.75
```

Details (Name, number of items purchased, item name1, cost1, item name2, cost2,...) of three customers of mall m1 are given as follows:

```
Ram 2 Bread 50.00 Jam 25.00

Sherley 3 Milk 20.00 Bread 50.00 Butter 31.50

Mukesh 4 Chocolate 15.00 Chips 12.50 Rice 29.00 Dall 31.25
```
Assume that the customer of mall has purchased only a maximum of ten items

<b>Input Format</b>
First line contains the number of customers of ABC bane, n <br />

Next ‘n’ lines contain the details of customers of bank such as Account holder name, Account number and Balance in order and separated by space<br />

 

Next line contains the number of customers to mall M1, m <br />

Next ‘m’ lines contains the details of customers to mall such as name, number of items purchased ‘r’, 2*r detail such as item name and cost. Each detail is separated by a sp<br />
<b>Output Format</b>
<br />Print name of the items purchased by Sherley, one item name in a line and balance amount in account of Sherley in the bank
<br /><br />
[Click here to see the answer](ques4.c)


[Go Back](./..){: .btn} 