/* ====================================================================================================== */
/* =====
    Question: Write a C program that accepts 4 real numbers from the keyboard and prints out the
              difference of the maximum and minimum values of these numbers using 4-decimal
              places.
                                                                                                    ===== */
/* ====================================================================================================== */

#include<stdio.h>
void main() {
    float num[4];
    int i,max,min;
    printf("Enter the 4 numbers separated by space: ");
    for(i=0;i<4;i++) {
        scanf("%f",&num[i]);
    }

    min=0;
    max=0;
    for(i=0;i<4;i++) {
        if(num[min]>num[i]) min=i;
        if(num[max]<num[i]) max=i;
    }
    printf("\nDifference between max and min = %f",num[max]-num[min]);
    return 0;
}
