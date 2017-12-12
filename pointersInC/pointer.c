/* ==================== */
/* ===== Pointers ===== */
/* ==================== */
#include<stdio.h>
int main() {
    int a=5,b=10,**temp;
    int *P;
    P=&a;
    temp=&P;
    printf("\naddress of a = value of P: %u",P);
    printf("\naddress of P: %u",temp);
    printf("\nValue of a: %d",a);
    printf("\nValue of *P: %d",*P);
    //printf("\nValue of *a: %d",*a);
}
