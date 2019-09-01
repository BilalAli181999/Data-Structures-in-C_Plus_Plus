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
	//	//cout << a.isIdentity();
	//a.printMatrix();
	//b.printMatrix();
	////	Matrix<int>mul = a+b;
	////	mul.printMatrix();
	////Matrix <int>ars(2, 2);
	//Matrix <Matrix<int>>arr(2, 2);
	//arr.at(0, 0).at(0, 0) = 1;
	//arr.at(0, 1).at(0, 0) = 2;
	//arr.at(1, 0).at(0, 0) = 3;
	//arr.at(1, 1).at(0, 0) = 4;
	//arr.at(1, 1).at(0, 0) = 4;
	//arr.at(0,0).printMatrix();
	/*for (int i = 0; i < arr.getRow(); i++)
	{
		for (int j = 0; j < arr.getCols(); j++)
		{
			for (int x = 0; x < arr.at(i, j).getRow(); x++)
			{
				for (int z = 0; z < arr.at(i, j).getCols(); z++)
				{
					cout << arr.at(i, j).at(x, z);
				}
				cout << "\n";
			}
		}
	}*/
	//cout<<arr.at(0, 0).getRow();
//Matrix<int>mul=	arr.at(1, 1).operator*(ars);
//mul.printMatrix();*/

	Matrix <cstring> m;
	m.at(0, 1)="hello";
	m.at(0, 1).display();
	/*Matrix <Matrix<cstring>> mo(1, 2);
	mo.at(0, 0).at(0, 0).display();*/
}