/* ===================================== */
/* ===== Solution to TAT problem 5 ===== */
/* ===================================== */

#include<stdio.h>

int fibonacci(int n) {
    int fibo;
    if (n==0) {
        fibo = 0;
    } else if (n==1) {
        fibo = 1;
    } else {
        fibo = fibonacci(n-1) + fibonacci(n-2);
        
    }
    return fibo;
}

int main () {
    int n,i;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}