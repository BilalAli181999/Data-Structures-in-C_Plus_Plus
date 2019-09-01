#include<iostream>
#include"matrix.h"
#include"cstring.h"
using namespace std;

int main()
{

	//Matrix<int> a(2, 2);
	//Matrix<int> b(2, 2);
	//a.at(0, 0) = 1;
	//a.at(0, 1) = 2;
	//a.at(1, 0) = 3;
	//a.at(1, 1) = 4;
	//b.at(0, 0) = 5;
	//b.at(0, 1) = 16;
	//b.at(1, 0) = 7;
	//b.at(1, 1) = 8;
	////	cout << a.isIdentity();
	//a.printMatrix();
	//b.printMatrix();
	//	Matrix<int>mul = a+b;
	//	mul.printMatrix();
//	Matrix <int>ars(2, 2);
	//Matrix <Matrix<int>>arr(2, 2);
	//arr.at(0, 0).at(0, 0) = 1;
	//arr.at(0, 1).at(0, 0) = 2;.ç
	//arr.at(1, 0).at(0, 0) = 3;
	//arr.at(1, 1).at(0, 0) = 4;
	//cout<<arr.at(0, 0).isIdentity();
	//arr.at(0,0).printMatrix();
//	cout << arr.at(0, 0).at(0, 0);

//Matrix<int>mul=	arr.at(1, 1).operator*(ars);
//mul.printMatrix();

	Matrix <Matrix<cstring>> m(1, 2);
	m.at(0, 0).at(0,0).display();

}