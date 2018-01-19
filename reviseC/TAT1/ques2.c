/* ================================= */
/* ===== TAT1 - question no. 2 ===== */ 
/* ================================= */

#include<stdio.h>

int euclid (int a, int b) {
    int r;
    r=a%b;
    while(r != 0) {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main () {
    int a,b,gcd;
    scanf("%d %d", &a, &b);
    gcd = euclid(a,b);
    printf("The GCD of these two numbers is: %d\n", gcd);
    return 0;
}