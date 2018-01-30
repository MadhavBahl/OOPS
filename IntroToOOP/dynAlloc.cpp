/* ==================================================================== */
/* ===== A simple program to show use of new and delete operators ===== */
/* ==================================================================== */

#include<iostream>
using namespace std;
int main () {
    double *ptr = NULL;
    ptr = new double;
    *ptr = 123.4212;
    cout<< "Value of ptr: " << *ptr<< endl;
    delete ptr;
    return 0;
}
