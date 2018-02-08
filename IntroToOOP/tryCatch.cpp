/* ============================================================ */
/* ===== Sammple program to illustrate exception handling ===== */
/* ============================================================ */

// Make a calculator that operates only on positive numbers

#include<iostream>
using namespace std;

int add (int x, int y) {
    if (x<0 || y<0) {
        throw 10;
    }
    return x+y;
}

int sub (int x, int y) {
    if (x<0 || y<0) {
        throw 10;
    } else if (x<y) {
        throw 10.01;
    }
    return x-y;
}

int mul (int x, int y) {
    if (x<0 || y<0) {
        throw 10;
    } 
    return x*y;
}

double divide (int x, int y) {
    if (x<0 || y<0) {
        throw 10;
    } else if (y == 0) {
        throw true;
    }
    return (double)x/y;
}

int main () {
    int a,b;
    char ch;
    cout<<"A simple calculator";
    cout<<"\nEnter the value of a: ";   cin>>a;
    cout<<  "Enter the value of b: ";   cin>>b;
    cout<<"\na. add\nb. subtract\nc. multiply \nd divide"<<endl;
    cout<<"\nYour Choice: ";    cin>>ch;
    if (ch == 'a' || ch == 'A') {
        try {
            int res;
            res = add (a,b);
            cout<<a<<" + "<<b<<" = "<<res;
        } catch (int n) {
            cout<< "Negative numbers not allowed";
        } 
    } else if (ch == 'b' || ch == 'B') {
        try {
            int res;
            res = sub (a,b);
            cout<<a<<" - "<<b<<" = "<<res;
        } catch (int i) {
            cout<<"Negative numbers not allowed";
        } catch (float j) {
            cout<<a<<" is less than "<<b;
        }
    } else if (ch == 'c' || ch == 'C') {
        try {
            int res;
            res = mul (a,b);
            cout<<a<<" * "<<b<<" = "<<res;
        } catch (int n) {
            cout<< "Negative numbers not allowed";
        } 
    } else if (ch == 'd' || ch == 'D') {
        try {
            double res;
            res = sub (a,b);
            cout<<a<<" / "<<b<<" = "<<res;
        } catch (int i) {
            cout<<"Negative numbers not allowed";
        } catch (bool j) {
            cout<<"Division by zero is not defined";
        }
    }

    

    return 0;
}