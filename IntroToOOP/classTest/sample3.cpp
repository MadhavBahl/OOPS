/* ================================= */
/* ===== Answer for question 3 ===== */
/* ================================= */

#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>

class triangle
{	
	int a;
	int b;
	int c;
	double area;
	int perimeter;
	public:
	//function to read data members of class
	void read();
	//function to calculate area
	void compute_area();
	//function to calculate perimeter
	void compute_perimeter();
	//function to check if the triangle is Heronian
	bool is_Heronian();
	//function to print perimeter of triangle
	void print_perimeter();
	//function to print area of triangle
	void print_area();
	
};

void triangle::read () {
    cin>>a;
    cin>>b;
    cin>>c;
}

void triangle::compute_perimeter() {
    perimeter = a+b+c;
}

void triangle::print_perimeter () {
    cout<<perimeter<<endl;
}

void triangle::compute_area () {
    double l1,l2,l3,s;
    s = (float)perimeter/2;
    l1 = s-a;   l2 = s-b;   l3 = s-c;
    float temp = s*l1*l2*l3;
    area = (float)sqrt(temp);
}

void triangle::print_area () {
    if (area - (int)area == 0) {
        cout<<(int)area<<endl;
    } else
        cout<<fixed<<setprecision(2)<<area<<endl;
}

bool triangle::is_Heronian () {
    double fract;
    fract = area - (int)area;
    if (fract == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
	triangle t;
	t.read();
	t.compute_perimeter();
	t.print_perimeter();
	t.compute_area();	
	t.print_area();
	if(t.is_Heronian())
	cout<<"Yes";
	else
	cout<<"No";
}