/* ========================================= */
/* ===== Solution for Sample Problem 1 ===== */
/* ========================================= */

#include<stdio.h>
int main () {
    float billAmt, buyDay, payDay, finalAmt;
    scanf("%f", &billAmt);
    scanf("%f", &buyDay);
    scanf("%f", &payDay);

    if(payDay <= buyDay + 10) {
        finalAmt = billAmt - (0.02 * billAmt);
    } else {
        finalAmt = billAmt;
    }

    printf("%0.2f", finalAmt);
}
