/* ============================================ */ 
/* ===== To check for a palindrome number ===== */
/* ============================================ */
#include<stdio.h>
int main() {
    int count,j,i=0,num,numArr[100],flag=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0) {
        numArr[i]=num%10;
        num=num/10;
        i++;
    }
    count=i;
    for(i=0,j=count-1;i<count/2;i++,j--) {
        if (numArr[i] != numArr[j]) {
            flag=0;
            break;
        }
    }
    if(flag==1)  printf("The given number is a palindrome!");
    else  printf("The given number is not a palindrome!");
    return 0;
}