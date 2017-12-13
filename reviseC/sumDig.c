/* ============================================================== */
/* ===== Sum of digits of a positive integer less than 1000 ===== */
/* ============================================================== */
#include<stdio.h>
int main() {
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(n>1000){
        printf("Invalid Input!");
        return 0;
    }
    while(num>0) {
        sum+= num%10;
        num=num/10;
    }
    printf("Sum of digits is: %d\n",sum);
    return 0;
}