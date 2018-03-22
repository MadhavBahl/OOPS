/* ======================================== */
/* ===== Example of virtual functions ===== */
/* ======================================== */

#include<iostream>
using namespace std;

class Base {
  private:
    int a;
  public:
    virtual void print () {
        cout<<"This is from base class"<<endl;
    }
};

class Da: public Base {
  private:
    int b;
  public:
    void print () {
        cout<<"This is from the derived class Da"<<endl;
    }
};

class Db: public Base {
  private:
    int c;
  public:
    void print () {
        cout<<"This is from the derived class Db"<<endl;
    }
};

int main () {
    Base A;
    A.print();
    Base *B;
    Da da;
    Db db;
    // B->print();
    B = &da;
    B->print();
    B = &db;
    B->print();
    return 0;
}
