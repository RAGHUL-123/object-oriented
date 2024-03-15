#include<iostream>
using namespace std;
int main()
{
	const double pi=3.1415926;
	double radius,area;
	cout<< "Enter the radius of the circle: ";
	cin>> radius;
	
	area=pi*radius*radius;
	
	cout<< "Area of the circle with radius "<<radius<<"is: "<<area<<endl;
	return 0;
}
