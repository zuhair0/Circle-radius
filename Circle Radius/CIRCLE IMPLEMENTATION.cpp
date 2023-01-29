#include<iostream>
#include "circle.h"
using namespace std;
circle::circle(){
	radius=0;
}
void circle::getradius(){
	cout<<"Enter radius: ";
	cin>>radius;
}
int circle::setradius(){
	int O;
	O=radius;
	return O;
}
int circle::area(){
	int A;
	A=3.14*radius*radius;
	cout<<"Area: "<<A;
	return A;	 
}
int main(){
	circle C;
	circle();
	C.getradius();
	C.area();
	return 0;
}
