/* ======================================== */
/* ===== Input the DOB in DDMMYYYY, find n,
        n is equal to the sum of digits
        until the sum is single digit ===== */
/* ======================================== */

#include<stdio.h>

int findSum(int temp) {
    int rem,sum=0;
    while(temp > 0) {
        rem = temp%10;
        sum += rem;
        temp /= 10;
    }
    if(sum<10)
        return sum;
    else
        return findSum(sum);
}

int main() {
    int sum,num,splNum;
    printf("Enter the DOB(in DDMMYYYY): ");
    scanf("%d",&num);
    if(num<1000000) {
        return printf("INVALID INPUT!!!!!\nEnter the DOB in DDMMYYYY");
    }
    splNum = findSum(num);
    printf("The special number is: %d",splNum);
}
