/* ============================================ */
/* ===== Number of vowels in a given line ===== */
/* ============================================ */
#include<stdio.h>
#include<string.h>
 int main() {
    int i,len,count=0;
    char line[100];
    printf("Enter a sentence: ");
    gets(line);
    len=strlen(line);
    for(i=0;i<len;i++) {
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
            count++;
        }
    }
    printf("Number of vowels are: %d",count);

 }
