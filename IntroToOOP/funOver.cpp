/* =========================== */

#include<iostream>
using namespace std;

// Example 1
int square (int x) {
    return x*x;
}
double square (double x) {
    return x*x;
}
char* square (char x) {
    return "No Square For Characters";
}

int main () {
    cout<<square(10)<<endl;
    cout<<square(10.5)<<endl;
    cout<<square('A');
    return 0;
}
