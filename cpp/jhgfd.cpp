#include<iostream>
using namespace std;
int main ()
{
	int num;
	float sub1,sub2,sub3,total,average;
	cout << "enter the students roll number: ";
	cin>> num;
	
	cout<< "enter the makrks in three subjects: ";
	cin>> sub1>>sub2>>sub3;
   total = sub1+sub2+sub3;
   average=total/3.0;
   cout<<"the average value: "average<<endl;
}
