/* ================================================= */
/* ===== Sample program for single inheritance ===== */
/* ================================================= */

#include<iostream>
using namespace std;

// Base Class
class parent {
  protected: 
    int age;
    int gender;
  public:
    float propertySize;
    void getPrivate ();
    void getProp ();
};

void parent::getPrivate () {
    cout<<"\n\t\t Getting Protected Info";
    cout<<"\nEnter the age: ";    cin>>age;
    cout<<"\nEnter the gender: "; cin>>gender;
}

void parent::getProp() {
    cout<<"\n\t\t Getting Public Info";
    cout<<"\nEnter the inherited property size: ";
    cin>>propertySize;
}

class child: public parent {
  private:
    int newProp;
  public:
    void getNewProp () {
        cout<<"\n\t\t Getting new property";
        cout<<"\nEnter the new property size: ";
        cin>>newProp;
    }
};

int main () {
    parent P;
    child C;
    cout<<"\n\t\t\t GETTING PARENT'S CHARACTERISTICS \n";
    P.getPrivate();
    P.getProp();
    cout<<"\n\t\t\t GETTING CHILD'S CHARACTERISTICS \n";
    C.getPrivate();
    C.getProp();
    C.getNewProp();
    return 0;
}