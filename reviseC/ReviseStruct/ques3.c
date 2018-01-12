/* ========================================= */
/* ===== Solution for Sample Problem 1 ===== */
/* ========================================= */

#include<stdio.h>
#include<string.h>

void reverse(char word[30], int l);

int main () {
    char word[30];
    int len;
    scanf("%s", word);
    len = strlen(word);
    reverse(word, len-1);
}

void reverse(char word[], int l) {
    if (l==0) {
        printf("%c", word[l]);
    } else if (l>0) {
        printf("%c", word[l]);
        reverse(word, l-1);
    }
}