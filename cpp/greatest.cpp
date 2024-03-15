#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the three elements: ";
	cin>>a>>b>>c;
	if (a>b & a>c)
	cout<<"a is maximum"<<a;
	if (b>a & b>c)
	cout<<"b is maximum"<<b;
	if (c>a & c>b)
	cout <<"c is maximum"<<c;
	
	return 0;
	
}
