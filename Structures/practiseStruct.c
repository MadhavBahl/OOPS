/* ========================================================== */
/*
    Question: Read the data for n students using structures
        1. Display number of students along with regno
           who scored centum in maths
        2. Number of students along with regno who failed in
           all three subjects
*/
/* ========================================================== */

#include<stdio.h>

struct stud {
    int regno;
    char name[100];
    struct marks {
        int mat;
        int cse;
        int phy;
    }score;
}students[20];

// Various function definitions
void readVal(struct stud *s,int i) {
        printf("\n\t\t\t\t STUDENT NUMBER %d\n",i+1);
        printf("\nEnter the register number (integer): ");
        scanf("%d",&s->regno);
        printf("Enter the name of the student (string): ");
        scanf("%s",s->name);
        printf("\n    READING THE MARKS OF THIS STUDENT\n");
        printf("\nEnter the marks in mathematics (out of 100): ");
        scanf("%d",&s->score.mat);
        printf("Enter the marks in Computer Science (out of 100): ");
        scanf("%d",&s->score.cse);
        printf("Enter the marks in Physics (out of 100): ");
        scanf("%d",&s->score.phy);
}

void dispVal(struct stud *s, int i) {
        printf("\n\n\t\t\t\t STUDENT NUMBER %d\n",i+1);
        printf("\nThe register number of the student is: %d",s->regno);
        printf("\nThe name of the student is: %s",s->name);
        printf("\n    DISPLAYING THE MARKS OF THIS STUDENT\n");
        printf("\nThe marks of the student in maths is: %d",s->score.mat);
        printf("\nThe marks of the student in computer science is: %d",s->score.cse);
        printf("\nThe marks of the student in physics is: %d",s->score.phy);
}

int main() {
    int n,i,j,regs[20],count;
    printf("Enter the number of students in your class: ");
    scanf("%d",&n);
    printf("\n\t\t\t READING THE INFORMATION OF STUDENTS\n");
    // Code block to read the students data
    for(i=0;i<n;i++) {
        readVal(&students[i],i);
    }
    // Code block to display the students data
    printf("\n\t\t\t PRINTING THE INFORMATION OF STUDENTS\n");
    for(i=0;i<n;i++) {
        dispVal(&students[i],i);
    }
    // Code block to find number of students who scored centum in mathematics
    count = 0;
    j=0;
    for(i=0;i<n;i++) {
        if(students[i].score.mat == 100) {
            regs[j] = students[i].regno;
            j++;
            count++;
        }
    }
    printf("\n\n The number of students who scored centum in maths: %d",count);
    for(i=0;i<count;i++) {
        printf("\n    The regno of stud %d is %d",i+1,regs[i]);
    }
    // Code block to find number of students who failed in all 3 subjects
    count = 0;
    j=0;
    for(i=0;i<n;i++) {
        if(students[i].score.mat < 50 && students[i].score.cse < 50 && students[i].score.phy < 50) {
            regs[j] = students[i].regno;
            j++;
            count++;
        }
    }
    printf("\n\n The number of students who failed in all 3 subjects: %d",count);
    for(i=0;i<count;i++) {
        printf("\n    The regno of stud %d is %d",i+1,regs[i]);
    }
    return 0;
}
