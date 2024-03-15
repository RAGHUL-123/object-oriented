#include<iostream>
using namespace std;
int fibonacci(int n){
if(n<=1)
return 1;
else
return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int n;
	cout<<"Enter the numbers upto n:"<<endl;
	cin>>n;
	cout<<"Fibonacci series upto"<<"\tn"<<"\tterms"<<endl;
	for(int i=0;i<n;i++)
	cout<<fibonacci(i)<<" ";
	cout<<endl;
	return 0;
}
