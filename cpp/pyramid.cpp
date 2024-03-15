//#include<iostream>
//using namespace std;
//int main()
//{
	int num,i,j;
//	cout<< "enter the number of rows: ";
//	cin>> num;
//	for(i=1;i<=num;i++)
//	{
//		for(j=1;j<=i;j++){
//			cout << j << " ";
//		}cout << endl;
//    }
//
//    return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

