#include<iostream>
using namespace std;

class Time {
  private:
    int hours;
    int minutes;
  public:
    Time () {
        hours = 0;
        minutes = 0;
    }
    Time (int h, int m) {
        hours =h;
        minutes = m;
    }
    void displayTime () {
        cout<<"Hours: "<<hours<<" Minutes: "<<minutes<<endl;
    }
    // Overloading prefix ++
    Time operator ++ () {
        ++minutes;
        if (minutes >= 60) {
            ++hours;
            minutes -= 60;
        }
        if (hours >= 13) {
            hours %= 12;
        }
        return Time (hours, minutes);
    }
    // Overloading postfix ++
    Time operator ++ (int ) {
        /* Time T(hours, minutes);
        ++T.minutes;
        if (T.minutes >= 60) {
            ++T.hours;
            T.minutes -= 60;
        }
        if (T.hours >= 13) {
            T.hours -= 12;
        }
        return T; */

        ++minutes;
        if (minutes >= 60) {
            ++hours;
            minutes -= 60;
        }
        if (hours >= 13) {
            hours %= 12;
        }
        return Time (hours, minutes);
    }
};

int main () {
    Time T1(11, 59), T2(30,40);
    ++T1;
    T1.displayTime();
    ++T1;
    T1.displayTime();
    T2++;
    T2.displayTime();
    T2++;
    T2.displayTime();
    return 0;
}
