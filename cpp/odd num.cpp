#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the integer to odd number or not: ";
	cin>>num;
	if(num&1)
	{
		cout<<num<< "is an odd number"<<endl;
	}
	else 
	{
		cout<<num<< "is not an odd number"<<endl;
	}
	return 0;
}
