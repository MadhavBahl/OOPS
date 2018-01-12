/* ========================================= */
/* ===== Solution for Sample Problem 3 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    int x,y,z,numt,nume,amt;
    scanf("%d %d %d", &x, &y, &z);
    z *= 6;
    numt = z/40;
    nume = z%40;
    amt = numt*x + nume*y;
    printf("%d", amt);
}