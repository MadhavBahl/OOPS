/* ========================= */
/* ===== Find sin(1/x) ===== */
/* ========================= */

#include<stdio.h>
#include<math.h>

int main() {
    float x,res;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    if(x == 0 )  printf("x should not be equal to 0");
    else {
        res=1/x;
        res=sin(res);
        printf("The value of sin(1/x) = %0.4f",res);
    }
    return 0;
}