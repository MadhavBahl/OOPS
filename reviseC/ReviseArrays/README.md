## Practise Expressions and conditional statements

### Sample Problem 1
Given a list of ‘n’ numbers, write an algorithm and a C program to print all numbers that have ‘mid property’. A number in the list is said to have mid property if the number to its left is less than itself and the number in the right to itself has value greater than itself. First number in the list is said to have mid property if the number to its right is greater than itself and the last number is said to have mid property if the number to its left is less than itself. For example, if the list of 10 numbers is 15, 12, 13, 45, 23, 56, 65, 11, 9 and 25 then the numbers with mid property are 13, 56 and 25. If none of the numbers in the list has mid property then print ‘No number has mid property’.

<b>Input Format</b>
First line contains the number of elements in the list, n

Next ‘n’ lines contains the elements in the list <br />
<b>Output Format</b>
Print numbers with mid property or print ‘No number has mid property’ when there are no elements with the property
<br /><br />
[Click here to see the answer](ques1.c)

### Sample Problem 2
Given a String with spaces, write an algorithm and a C program to count the number of words in it and length of the longest word. For example, if the input string is ‘I love programming’ then the number of words is three and length of the longest string is 11.

<b>Input Format</b>
First line contains the sentence to be analyzed<br />
<b>Output Format</b>
Print the number of words in the first line and length of the longest word in the second line


<br /><br />
[Click here to see the answer](ques2.c)

### Sample Problem 3
Given a NXN matrix of numbers, write an algorithm and a C code to check if the outer elements are same. For example if the 4X4 matrix as shown below is given then print ‘Same’.

![image](https://user-images.githubusercontent.com/26179770/34876698-b8a771ca-f7c8-11e7-8316-ecbded23d310.png)

If the matrix given is as follows then print ‘Not same’.
![image](https://user-images.githubusercontent.com/26179770/34876700-bb6ece12-f7c8-11e7-9daa-374c0f40f7aa.png)

<b>Input Format</b>
First line contains the dimension of the matrix, n

Next nXn lines, contains elements of the matrix given row-wise<br />
<b>Output Format</b>
Print either Same or Not same
<br /><br />
[Click here to see the answer](ques3.c)

### Sample Problem 4
Given a NXN character matrix, write an algorithm and a C program to toggle the case of the characters along the diagonals of the matrix, for example given a 5X 5 matrix as follows:
![image](https://user-images.githubusercontent.com/26179770/34877046-56b6a90c-f7ca-11e7-97dc-b37c2fa6bf72.png)

Then the output matrix should be:
![image](https://user-images.githubusercontent.com/26179770/34877049-596ca2f0-f7ca-11e7-8f87-3d1edccbdb03.png)

<b>Input Format</b>
First line contains the dimension of the matrix, n
Next nXn lines, contains elements of the matrix given row-wise<br />

<b>Output Format</b>
Print the output nXn matrix in matrix format
<br /><br />
[Click here to see the answer](ques4.c)

### Sample Problem 5
Given ‘n’ words, write an algorithm and the C program to print all the ‘Leader words’. A word is said to be a leader word if it is lexicographically greater than all the words that are right to it. Last word is always a ‘Leader word’. For example, given five strings rat, cat, apple, ball and bag the output should be rat, cat, ball and bag.

<b>Input Format</b>
First line contains the number of words, n

Next ‘n’ lines contain the words<br />

<b>Output Format</b>
Print the leader words one in each line
<br /><br />
[Click here to see the answer](ques5.c)

[Go Back](./..){: .btn}