/* ============================================================================== */
/* ===== question: WAP that prints out the prime numbers between 1 and 100.
                   The output should be such that each row contains a
                   maximum of 7 prime numbers.                              ===== */
/* ============================================================================== */

#include<stdio.h>
int main() {
    int prime[100];
    int i,j,count=0,flag=1;
    for(i=2;i<=100;i++) {
        flag=1;
        for(j=2;j<=i/2;j++) {
            if(i%j == 0) {
                flag=0;
                j=i/2;
            }
        }

        if(flag == 1) {
            prime[count] = i;
            count++;
        }
    }

    printf("\n The prime numbers are: ");
    for(i=0;i<count;i++) {
        if(i%7==0)  printf("\n");
        printf("%d  ",prime[i]);
    }

}
