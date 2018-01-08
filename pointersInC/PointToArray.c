#include<stdio.h>
int main() {
    int gradeList[8] = {92,85,75,88,79,54,34,96};
    int *myGrades = gradeList;
    printf("1st element of gradelist using array index: %d\n",gradeList[0]);
    printf("1st element of gradelist using pointer: %d\n",*myGrades);
    printf("2nd element of gradelist using array index: %d\n", *(myGrades + 1));
    printf("2nd element of gradelist using pointer: %d\n", myGrades[1]);
    printf("3rd element of gradelist using array index: %d\n", *(myGrades + 2));
    printf("3rd element of gradelist using pointer: %d\n", myGrades[2]);
    printf("4th element of gradelist using array index: %d\n", *(myGrades + 3));
    printf("4th element of gradelist using pointer %d\n", myGrades[3]);
    printf("5th element of gradelist using array index: %d\n", *(myGrades + 4));
    printf("5th element of gradelist using pointer: %d\n", myGrades[4]);
    return 0;
}
