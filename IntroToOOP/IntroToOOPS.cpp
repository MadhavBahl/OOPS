/* ======================== */
/* ===== Intro To OOP ===== */
/* ======================== */
#include<iostream>
using namespace std;

class calc {
  private:
    int a;
    int b;
  public:
    void input() {
        cout<<"\nEnter the value of a: ";  cin>>a;
        cout<<"Enter the value of b: ";    cin>>b;
    }
    void sum() {
        cout<<"Sum of "<<a<<" and "<<b<<" is: "<<a+b;
    }
};

int main() {
    int a,b,sum;
    calc c1;
    cout<<"\n\t\t\t My First C++ Program";
    c1.input();
    c1.sum();
    return 0;
}
