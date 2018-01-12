/* ========================================= */
/* ===== Solution for Sample Problem 2 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    int num,sq,sum=0;
    scanf("%d", &num);
    
    while( num > 0 ) {
        sq = (num%10);
        sum += sq*sq;
        num = num/10;
    }
    
    if ( sum%10 == 0 )    printf("Valid");
    else    printf("Invalid");
    return 0;
}