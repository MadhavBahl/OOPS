/* =============================================== */ 
/* ===== Program to calculate Simple Intrest ===== */
/* =============================================== */
#include<stdio.h>
int main() {
    float p,r,t,si;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the Rate of intrest: ");
    scanf("%f",&r);
    printf("Enter the Time period: ");
    scanf("%f",&t);
    si=p*r*t/100;
    printf("The simple initrest is: %0.2f",si);
    return 0;
}