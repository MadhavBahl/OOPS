/* ======================================== */
/* ===== Solution to sample problem 7 ===== */
/* ======================================== */

#include<iostream>
using namespace std;

class customer {
  protected:
    char name[20], address[40], id[10];
    long int mobile;
    float cost[100];
    int num;
  public:
    void get () {
        cin>>name;
        cin>>mobile;
        cin>>address;
        cin>>id;
        cin>>num;
        for (int i=0; i<num; i++) {
            cin>>cost[i];       
        }
    }
    
    float calc_Total() {
        float tot=0;
        for (int i=0;i<num;i++) {
            tot+=cost[i];
        }
        return tot;
    }
};

class preferred_Customer: public customer {
  public:
    float calc_Total() {
        float tot, finalTot=0;
        for (int i=0;i<num;i++) {
            tot=cost[i];
            if (tot>=20000) {
                tot=0.96*tot;
            } else if (tot>=15000 && tot<20000) {
                tot = 0.97*tot;
            } else if (tot>=10000 && tot<15000) {
                tot = 0.98*tot;
            } else if (tot>=5000 && tot<10000) {
                tot = 0.99*tot;
            }
            finalTot += tot;
        }
        return finalTot;
    }
};



int main() { 
    int ch; 
    //get choice of customer 
    cin>>ch; 
    if(ch==0) { 
        customer c1; 
        //get the details of customer 
        c1.get(); 
        //calculate total amount to be paid 
        //develop a function in customer class that will calculate 
        // the total amount and return it 
        cout<<c1.calc_Total(); 
    } else { 
        //preferred customer preferred_Customer pc; 
        //get details pc.get(); 
        //function should calculate and return total amount 
        cout<<pc.calc_Total(); 
    } 
}