/* ============================================================= */
/* ===== Sum of series 15+25+35+45+55+........+n5. n <= 50 ===== */
/* ============================================================= */
#include<stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter a number (n<50): ");
    scanf("%d",&n);
    if(!(n>0 && n<50)){
        printf("Invalid Input!");
        return 0;
    }
    for(i=1;i<=n;i++) 
        sum+=10*i+5;
    printf("The sum is: %d",sum);
    return 0;
}