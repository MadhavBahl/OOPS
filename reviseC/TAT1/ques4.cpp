/* ===================================== */
/* ===== Solution to TAT problem 4 ===== */
/* ===================================== */

#include<iostream>
using namespace std;
//Function to find weekday number
// 0 - Sunday, 1 - Monday and so on 6-Saturday
int find_day(int n);
//Given a character array of size 5 with subject letter print the name of the subject corressponding to position i
void print_first_hour(char* sub, int i);
//Function to check if given Saturday is an even Saturday
bool check_Even_Sat(int d);
// Function to find odd Saturday number, odd Saturday number of day 6 is 1, day 20 is 2 and so on
int find_Odd_Sat_Num(int d);

int main () {
    char subjects[5];
    int n,i,weekday,pos,rem,num;
    bool sat;
    for(i=0;i<5;i++) {
        cin>>subjects[i];
    }
    cin>>n;
    weekday = find_day(n);
    rem = n/7;
    if (weekday == 6) {
        sat = check_Even_Sat(rem);
        if (!sat) {
            num = find_Odd_Sat_Num(rem);
            num = num%5;
            print_first_hour(subjects,num);
            
        } else {
            print_first_hour(subjects,-1);
        }
    } else {
        if(weekday==0) {
            print_first_hour(subjects,-1);
        } else {
            print_first_hour(subjects,weekday-1);   
        }
    }
    return 0;
    
}

int find_day (int n) {
    return n%7;
}

void print_first_hour (char* sub, int i) {
    if (i==-1) {
        cout<<"Holiday";
    }
    else {
        if (sub[i] == 'E')  cout<<"English";
        else if (sub[i] == 'P') cout<<"Physics";
        else if (sub[i] == 'C') cout<<"Chemistry";
        else if (sub[i] == 'M') cout<<"Maths";
        else if (sub[i] == 'R') cout<<"Computer Science";
    }
    
}

bool check_Even_Sat (int d) {
    if (d%2 == 0) {
        return false;
    } else {
        return true;
    }
}

int find_Odd_Sat_Num (int d) {
    return (d/2)+1;
}

