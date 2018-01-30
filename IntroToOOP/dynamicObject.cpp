/* =============================================================== */
/* ===== A simple program for dynamically allocating objects ===== */
/* =============================================================== */

#include<iostream>
#include<cstring>

using namespace std;

class test {
  public:
    test() {
        cout<<"Constructor was called!!"<<endl;
    }

    ~test() {
        cout<<"Destructor was called!!"<<endl;
    }
};
int main () {
    test *t = new test;
    delete t;
    test *t1 = new test[4];

    delete [] t1;
    return 0;
}

