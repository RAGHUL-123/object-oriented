#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first value: ";
	cin>>a;
	cout<<"Enter the second value: ";
	cin>>b;
	cout<<"Enter the third value:";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"A is the maximum number";
	}
	else if (b>a && b>c)
	{
		cout<<"B is the maximum number";
	}
	else
	{
		cout<<"C is the maximum number";
	}
	return 0;
}
