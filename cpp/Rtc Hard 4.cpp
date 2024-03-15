#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int sum1,sum2;
    double sum3;
    cout<<"enter  two number to sum: ";
    cin>>sum1;
    cout <<"enter three numbers to sum:  ";
    cin>>sum2;
    cout<<"enter the point digit number to sum: ";
    cin>>sum3;

    cout << "Sum is: " << sum1 << endl;
    cout << "Sum is: " << sum2 << endl;
    cout << "Sum is: " << sum3 << endl;

    return 0;
}
