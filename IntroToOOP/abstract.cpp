/* ============================================= */
/* ===== Example of pure virtual functions ===== */
/* ============================================= */

#include<iostream>
using namespace std;

class Base {
  private:
    int a;
  public:
    virtual void print() = 0;
    int getA() {
        return a;
    }
};

class Derived {
  private: 
    int b;
  public:
    void print() {
        cout<<"The function was called from the Derived class\n";
    }
};

int main () {
    Derived d;
    d.print();
    return 0;
}