/* ========================================= */
/* ===== Solution for Sample Problem 4 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    char chr;
    scanf("%c", &chr);
    if ((chr>=65 && chr<=90) || (chr >= 97 && chr <= 122)) 
        printf("You have entered an alphabet");
    else if ( chr >= 48 && chr <= 57)
        printf("You have entered a digit");
    else 
        printf("You have entered a special character");
    
}