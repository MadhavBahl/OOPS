/* ========================================= */
/* ===== Solution for Sample Problem 5 ===== */
/* ========================================= */

#include<stdio.h>
#include<string.h>
int main () {
    int n,i,j,k,count=0,temp=1;
    char dict[50][15],lexico[50][15];
    // Input phase
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", dict[i]);
    }
    // Check and compare the lexicographical order of each word to the word at it's right
    for(i=0;i<n;i++) {
        temp = 1;
        for(j=i+1;j<n;j++) {
            for(k=0;k<strlen(dict[i]);k++) {
                if(dict[j][k]>dict[i][k]) {
                    temp = 0;
                    j=n;
                    k=n;
                } else if (dict[j][k] < dict[i][k]) {
                    temp = 1;
                    k=n;
                }
            }
            
        }
        if(temp == 1) {
            strcpy(lexico[count], dict[i]);
            count++;
        }
    }
    strcpy(lexico[count], dict[i]);
    printf("Hello\n");
    for(i=0;i<count;i++) {
        printf("%s\n", lexico[i]);
    }
}