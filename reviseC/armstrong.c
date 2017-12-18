/* ============================ */
/* ===== Armstrong number ===== */
/* ============================ */

#include<stdio.h>

int main() {
    int num,sum=0,temp,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp = num;
    while(temp > 0) {
        rem = temp%10;
        sum += rem*rem*rem;
        temp /= 10;
    }
    //printf("Sum is: %d",sum);
    if(sum == num) {
        printf("Yes, the given number is an armstrong number!");
    } else {
        printf("No, the given number is not an armstrong number!");
    }
    return 0;
}
