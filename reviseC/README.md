# C Programming 
C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations. By design, C provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, including operating systems, as well as various application software for computers ranging from supercomputers to embedded systems.<br />
C was originally developed by Dennis Ritchie between 1969 and 1973 at Bell Labs, and used to re-implement the Unix operating system. It has since become one of the most widely used programming languages of all time, with C compilers from various vendors available for the majority of existing computer architectures and operating systems. C has been standardized by the American National Standards Institute (ANSI) since 1989 (see ANSI C) and subsequently by the International Organization for Standardization (ISO).

## Getting started with C
There are many books you can refer to get started with C Programming:
  * [Let Us C](https://www.amazon.in/Let-Us-C-Yashavant-Kanetkar/dp/8183331637/ref=as_li_ss_tl?s=books&ie=UTF8&qid=1482474153&sr=1-1&keywords=let+us+c&linkCode=sl1&tag=thecrazprog-21&linkId=0eee92bcac00b24033e591f1ba74faaf)
  * [The C Programming language](https://www.amazon.in/Programming-Language-Kernighan-Dennis-Ritchie/dp/9332549443/ref=as_li_ss_tl?s=books&ie=UTF8&qid=1482474311&sr=1-1&keywords=the+c+programming+language&linkCode=sl1&tag=thecrazprog-21&linkId=d802d14bd1b47f83f949746ea2f05b94)
  * [C: The Complete Reference](https://www.amazon.in/C-Complete-Reference-Herbert-Schildt/dp/0070411832/ref=as_sl_pc_tf_til?tag=thecrazprog-21&linkCode=w00&linkId=TUAPDSTEEGNKVVWF&creativeASIN=0070411832)
  * [Programming in ANSI C](https://www.amazon.in/Programming-ANSI-C-Balagurusamy/dp/933921966X/ref=as_li_ss_tl?s=books&ie=UTF8&qid=1482474187&sr=1-1&keywords=ansi+c&linkCode=sl1&tag=thecrazprog-21&linkId=30fc46dc98b370dd22cfda8bb2cd856b)
  * [Head First C](https://www.amazon.in/Head-First-C-David-Griffiths/dp/9350236923/ref=as_sl_pc_tf_til?tag=thecrazprog-21&linkCode=w00&linkId=RUUWS5S4GYEUTYL5&creativeASIN=9350236923)

## NOTE*
Even though all answers are given, <b>try slving the problems by yourself</b>, even before looking at the answer.

## Confident On Your Skiils? Test Them
Try out some good problems. Do them yourself, if you get stuck somewhere, the answers are always there.

  1. [Assignment on conditional statements in C](./ReviseConditional)
  2. [Assignment on Looping statements in C](./ReviseLoops)
  3. [Assignment on Arrays and strings in C](./ReviseArrays)
  4. [Assignment on Structures and functions in C](./ReviseStruct)
  5. [Take A Test 1](./TAT1)

## Begginer? Try out some basic programs in C

  1. [Factorial of a given number](factorial.c)  <br />
     <b>LOGIC</b>: use recursive functions <br />
        ```c
        int factorial(int n) {
           if(n>1) return n*factorial(n-1);
           else return 1;
        } 
        ```
  2. [Prime Number](prime.c)<br />
      <b>LOGIC</b>: Use for loop till n/2 elements <br />
      ```c
        for(i=2;i<=n/2;i++) {
          if(n%i == 0){
              flag = 1;
              break;
          }
        }
        ```
  3. [Fibonacci Series](fibonacci.c)<br />
      <b>LOGIC</b>: Use for loop <br />
      ```c
        for(i=1;i<=n;i++) {
          if(i<3) a3=1;
          else {
              a3=a2+a1;
              a1=a2;
              a2=a3;
          }
        }
      ```
  4. [Sum of elements in array](sumOfElements.c)<br />
      <b>LOGIC</b>: Use for loop <br />
        ```c
        for(i=0;i<n;i++) {
          sum+=a[i];
        } 
        ```
  5. [Duplicate elements of an array](arrayDup.c)<br />
      <b>LOGIC</b>: Use for loop <br />
        ```c
        for(i=0;i<n;i++) {
          b[i]=a[i];
        }
        ```
  6. [Array Reversal](ArrayReversal.c)<br />
      <b>LOGIC</b>:Use temp variable<br />
      ```c
          for(i=0,j=n-1;i<n/2;i++,j--) {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
      ```
  7. [Multi dimensional array input](arrayip.c)<br />
      <b>LOGIC</b>: Use nested loops <br />
      ```c
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++)
                scanf("%d",&A[i][j]);
        }
      ```
  8. [Sum of matrix](arraySum.c)<br />
      <b>LOGIC</b>: Add individual element <br />
      ```c
        for(i=0;i<r;i++) {
          for(j=0;j<c;j++){
              scanf("%d",&B[i][j]);
              sum[i][j] = A[i][j]+B[i][j];
          }
        }
      ```
  9. [String operations in C](arrayAsString.c)<br />
    ```c
      strlen();
      strrev();
      strcpy();
      strcat();
      strcmp();
    ```
  10. [WAP which reads a single letter of alphabet. If it is a lowercase between
              ’a’ and ’g’, the program prints out the alphabet in uppercase form. If it is anything
              else, the program should print out uppercase ’X’.](ans1.c)
  
  11. [WAP that accepts 4 real numbers from the keyboard and prints out the
              difference of the maximum and minimum values of these numbers using 4-decimal
              places.](ans2.c)

  12. [Find sin(1/x) where x != 0 upto 4 digits of precision](sin.c)
  13. [Check for palindrom number](palindrom.c)
  14. [Number of vowels in a given line](vowels.c)<br />
        <b>LOGIC</b>: Use if condition <br />
      ```c
        for(i=0;i<len;i++) {
            if(line[i] == 'a' || ......... || line[i] == 'U') {
            count++;
            }
        }
      ```
  15. [Prime numbers from 1 to 100](ansPrime.c)
  16. [Simple Intrest](si.c)
  17. [Write a C program that accepts a positive integer n less than 50 from the terminal and
prints out the sum 15 +25 +45 +75 +115 +_ _ _+m5, where m is less than or equal to
n.](findSumSeries.c)
  18. [Sum of digits of a positive integer less than 1000](sumDig.c)
  19. [Write a C program that accepts integers from the keyboard until we enter a zero or a
negative number. The program will output the number of positive values entered, the
minimum value,the maximum value and the average of all numbers.](iptillo.c)
  20. [Input the DOB in DDMMYYYY, find n,
        n is equal to the sum of digits
        until the sum is single digit](DOB.c)
  21. [Sum of first and last digit of an integer](sum1l.c)
  22. [Armstrong Number](armstrong.c)

[Go Back](./..){: .btn}
