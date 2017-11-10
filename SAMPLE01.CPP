#include<iostream>
using namespace std;

class Box {
	public:
		double length;
		double breadth;
		double height;
		
		double getVolume1(void) {		// type 1
			return length*breadth*height;
		}

		double getVolume2(void);
};

double Box::getVolume2(void) {
	return length*breadth*height;
}

int main() {
	Box Box1;
	Box Box2;
	double volume = 0.0;

	// box 1 specifications
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	// box 2 specifications
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	// volume of box 1
	volume = Box1.height*Box1.length*Box1.breadth;
	cout << "Volume of Box1: " << volume << endl;

	// volume of box 2
	volume = Box2.height*Box2.length*Box2.breadth;
	cout << "Volume of Box2: " << volume << endl;

	// volume using functions
	cout << "Volume of Box1: " << Box1.getVolume1() << endl;
	cout << "Volume of Box2: " << Box2.getVolume2() << endl;

	return 0;
}
