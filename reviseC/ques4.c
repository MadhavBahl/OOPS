/* ==========
    Question: Imagine the case of a darshan queue at a holy temple, where the queue is
                divided into three levels: I, II, and III. There are three categories of
                darshan: i) Normal, ii) Special Darshan, and iii) Special Darshan with
                Puja. A devotee for normal darshan is entered into the queue of level -III.
                When it is found that queue level II is not full, then the devotee from
                front of the queue level III is removed and inserted to the queue level II.
                Similarly, when queue level I is not full, a devotee from the front of level
                II is removed and inserted to level I. However, a devotee for Special
                Darshan and Special darshan with puja is inserted directly in the end of
                queue level II and I respectively. Write a menu driven program in C /
                C++ to implement the above data structure and all its operations. 
========== */

// Include the required header files
#include<stdio.h>

// Consider that the maximum number of people in each queue ca be 15
const max_size = 10;

// Functions for queue operations
void addDevotee(int queue[], int *front, int *rear, int *qno) {
    if(*rear == max_size-1) {
        printf("\nAll The Queues Are Full! \nPlease Try Again After Some Time!");
    } else if(isEmptyQ(queue, &front, &rear) == 1) {
        *front=0;
        *rear =0;
        queue[*rear]=1;
        printf("\nCongrats! You found a place in the queue %d",*qno);
    } else {
        *rear = *rear+1;
        queue[*rear]=1;
        printf("\nCongrats! You found a place in the queue %d",*qno);
    }
}
void removeDevotee(int queue, int *front, int *rear, int *qno) {
    if(isEmptyQ(queue, &front, &rear) == 1) {
        printf("\nThe queue %d is empty", *qno);
        return;
    } else if (*front == *rear) {
        *front = -1;
        *rear = -1;
    } else {
        *front = *front + 1;
    }
}
int isEmptyQ(int queue[], int *front, int *rear) {
    if(*front == -1 && *rear == -1) {
        return 1;
    } else {
        return 0;
    }
}
int isNotFull(int queue[], int *front, int *rear, int *qno) {
    if(*rear == max_size-1) {
        return 0;
    } else {
        *qno = *qno-1;
        printf("\nWAIT!!! The Queue level %d is not yet full!",*qno);
        return 1;
    }
}

// Main Function
int main() {
    // Declare the needed variables to solve this problem
    int choice,q1[max_size],q2[max_size],q3[max_size],f1=-1,f2=-1,f3=-1,r1=-1,r2=-1,r3=-1,cq;

    while(1) {
        // Menu
        printf("\n\n\t\t\t Managing queue at temple\n");
        printf("\nChoose the category: ");
        printf("\n 1. Normal Devotee");
        printf("\n 2. Special Devotee");
        printf("\n 3. Special Devotee with puja");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        // for normal devotee
        if(choice == 1) {
            // Add the devotee to queue level 3
            cq=3;
            addDevotee(q3,&f3,&r3,&cq);
            // Check for a position in queue 2
            if(isNotFull(q2,&f2,&r2,&cq) == 1) {
                // Remove the man from queue 3 and put him in queue 2
                removeDevotee(q3,&f3,&r3,&cq);
                addDevotee(q2,&f2,&r2,&cq);
            } else {
                printf("\nQueue level 1 and 2 are full! the devotee stays in Queue 3 for some time!");
            }
            // Check for a position in queue 1
            if(isNotFull(q1,&f1,&r1,&cq) == 1) {
                // Remove the man from queue 3 and put him in queue 2
                removeDevotee(q2,&f2,&r2,&cq);
                addDevotee(q1,&f1,&r1,&cq);
            } else {
                printf("\nQueue level 1 and 2 are full! the devotee stays in Queue 3 for some time!");
            }

        } 
        // for special darshan devotee
        else if(choice == 2) {
            // Add the devotee to queue level 2
            cq=2;
            addDevotee(q2,&f2,&r2,&cq);
            // Check for a position in queue 1
            if(isNotFull(q1,&f1,&r1,&cq) == 1) {
                // Remove the man from queue 3 and put him in queue 2
                removeDevotee(q2,&f2,&r2,&cq);
                addDevotee(q1,&f1,&r1,&cq);
            } else {
                printf("\nQueue level 1 is full! the devotee stays in Queue 2 for some time!");
            }
        }
        // for special darshan with puja devotee
        else if(choice == 3) {
            // Add the devotee to queue level 1
            cq=1;
            addDevotee(q1,&f1,&r1,&cq);
        }
        else {
            printf("\nInvalid Input");
        }
    }
    
}
