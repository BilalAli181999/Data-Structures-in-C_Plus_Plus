#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;

 class Matrix
{
private:
	int rows;
	int cols;
	int **data;
public:
	Matrix();
	Matrix(const Matrix & ref);
	Matrix(int r, int c);
	~Matrix();
	void setRow(int r);
	void setColumn(int c);
	int getRow()const;
	int getCols()const;
	int& at(const int r, const int c);
	void printMatrix();
	int isIdentity();
	bool isUpperTriangular()const;
	bool  isLowerTriangular()const;
	bool isNull()const;
	bool isDiagonal();
	bool isTriangular()const;
	bool isRectangular()const;
	bool isEqual(const Matrix &)const;
	bool isSymetric();
	bool isSkewSymetric();
	void resize(int rows, int cols);
//	int & operator[][](int ,int );

	void  operator= (const Matrix & ref);
	Matrix getTranspose();
	Matrix operator+(const Matrix & ref);
	Matrix operator-(const Matrix & ref);
	Matrix operator*(const Matrix &ref);
	friend ostream& operator <<(ostream& str, const Matrix &ref);
	friend istream& operator >>(istream& istr, const Matrix& ref);
};


#endif

