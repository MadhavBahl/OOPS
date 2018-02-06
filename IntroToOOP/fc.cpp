/* ======================================== */
/* ===== Sapme program - Friend Class ===== */
/* ======================================== */

#include<iostream>
using namespace std;

class square;
class  rectangle {
	int w,h;
    public:
	rectangle (int wid=1, int hgt=1) {
		h = hgt;
		w = wid;
	}
	void display () {
		cout<<"Area of rectangle: "<<w*h<<endl;
	}
	void morph(square &s);
};
class  square{
	int side;
    public: 
	square (int s = 1) {
		side = s;
	}
	void display () {
		cout<< "Area of sqaure is : "<<side*side<<endl;
	}
	friend class rectangle;
};

void rectangle::morph(square &s) {
	w = s.side;
	h = s.side;
}

int main () {
	rectangle rec(5,10);
	square sq(5);
	cout<<"\nBefore: "<<endl;
	rec.display();
	sq.display();

	rec.morph(sq);
	cout<< "\nAfter: "<<endl;
	rec.display();
	sq.display();
	return 0;
}
