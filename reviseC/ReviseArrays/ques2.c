/* ========================================= */
/* ===== Solution for Sample Problem 2 ===== */
/* ========================================= */

#include<stdio.h>
#include<string.h>
int main () {
    char str[100];
    int count=0,letrs[40],i,len;
    // Take the input
    scanf("%[^\n]s", str);
    // counting the words and the length of longest word
    len = strlen(str);
    letrs[count] = 0;
    for(i=0;i<len;i++) {
        if(str[i] != ' ') {
            letrs[count]++;
        } else {
            count++;
            letrs[count]=0;
        }
    }
    // Find the max length of word
    int max = letrs[0];
    for(i=0;i<=count;i++) {
        if(letrs[i] > max) {
            max = letrs[i];
        }
    }
    printf("%d\n", count+1);
    printf("%d", max);
}