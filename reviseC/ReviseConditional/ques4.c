/* ========================================= */
/* ===== Solution for Sample Problem 4 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    char cadre;
    scanf("%c", &cadre);
    if (cadre == 'A' || cadre == 'a')
        printf("10%%");
    else if (cadre == 'B' || cadre == 'b')
        printf("8%%");
    else if (cadre == 'C' || cadre == 'c')
        printf("6%%");
    else if (cadre == 'D' || cadre == 'd')
        printf("5%%");
    else
        printf("Invalid input");
}