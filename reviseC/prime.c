/* =========================================================== */
/* ===== Program to find the factorial of a given number ===== */
/* =========================================================== */

#include<stdio.h>
void chkPrime(int n);
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    chkPrime(n);
    return 0;
}
void chkPrime(int n) {
    int i,flag = 0;
    for(i=2;i<=n/2;i++) {
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)   printf("The given number is not prime\n");
    else   printf("The given number is prime\n");
}
