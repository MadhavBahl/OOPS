/* ========================================= */
/* ===== Solution for Sample Problem 4 ===== */
/* ========================================= */

#include<stdio.h>

void convertBase(int n) {
    char newNum[10], sample[4] = {'A','B','C','D'};
    int rem,count=0;
    while(n>0) {
        rem = n%14;
        if(rem<10) {
            newNum[count] = rem+48;
            count++;
        } else {
            newNum[count] = sample[rem%10];
            count++;
        }
        n=n/14;
    }
    for(int i=count-1;i>=0;i--) {
        printf("%c", newNum[i]);
    }
}

int main () {
    int num;
    scanf("%d", &num);
    convertBase(num);
    return 0;
}