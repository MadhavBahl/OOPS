/* ================================= */
/* ===== Main string functions ===== */
/* ================================= */
#include<stdio.h>
#include<string.h>

int main() {

    int n;
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);

    /* ===== 1. Strlen ===== */

    printf("Your name is: %s",name);
    n=strlen(name);
    printf("\nString length: %d",n);

    /* ===== 2. Strrev ===== */

    // strrev(name);
    // printf("\nReversed name: %s",name);

    /* ===== 3. Strcpy: **initial values of a are overwritten ===== */

    char a[20] = { 'a','b','c','\0'};
    strcpy(a,name);
    printf("\nString a: %s",a);

    /* ===== 4. Strcat ===== */

    char b[20];
    printf("\nEnter the second string: ");
    scanf("%s",b);
    strcat(a,b);
    printf("Complete Concatenated string is: %s",a);
    strncat(a,b,1);
    printf("\nPartial concatenated string is: %s", a);

    /* ===== 5. Strncmp: **returns ascii difference between two strings ===== */
    /* ===== Stricmp: case insensitive comparison ===== */
    n=strncmp(a,b,2);
    if(n==0)    printf("\nBoth a and b are equal");
    else    printf("\nBoth a and b are not equal");
}
