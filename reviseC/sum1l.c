/* ======================================= */
/* ===== Sum of first and last digit ===== */
/* ======================================= */

#include<stdio.h>

int main() {
    int num,temp,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum += num%10;
    while(num > 0) {
        rem = num%10;
        num = num/10;
        if(num == 0)
            sum+=rem;
    }
    printf("Sum of first and last digit(s) is: %d",sum);
    return 0;
}
