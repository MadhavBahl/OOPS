/* ====================================================================================================== */
/* =====
    Question: Write a program which reads a single letter of alphabet. If it is a lowercase between
              ’a’ and ’g’, the program prints out the alphabet in uppercase form. If it is anything
              else, the program should print out uppercase ’X’.
                                                                                                    ===== */
/* ====================================================================================================== */

#include<stdio.h>
void main() {
    char ip;
    printf("Enter a character: ");
    scanf("%c",&ip);
    if((int)(ip) >= 97 && (int)(ip) <= 103) {
        printf("Output: %c",ip-32);
    } else {
        printf("Ouput: X");
    }
    return 0;
}
