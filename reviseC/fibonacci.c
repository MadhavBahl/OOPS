/* ===================================================================== */
/* ===== Program to print the fibonacci series upto a given number ===== */
/* ===================================================================== */

#include<stdio.h>
void printFib(int n);
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printFib(n);
    return 0;
}
void printFib(int n) {
    int a1=1,a2=1,a3=1,i;
    for(i=1;i<=n;i++) {
        if(i<3) a3=1;
        else {
            a3=a2+a1;
            a1=a2;
            a2=a3;
        }
        printf("\na%d = %d",i,a3);
    }
}
