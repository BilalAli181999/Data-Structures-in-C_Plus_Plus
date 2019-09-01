//#include "matrix.h"
//#include<iostream>
//#include"cstring.h"
//using namespace std;
//template <class T>
//Matrix<T>::Matrix()
//{
//	
//	rows = 2;
//	cols = 2;
//	data = new T*[rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new T[cols];
//	}
//	
//}
//template <class T>
//Matrix<T>::Matrix(const Matrix<T> & ref)
//{
//	this->rows = ref.rows;
//	this->cols = ref.cols;
//	this->data = new T*[rows];
//	for (int i = 0; i < rows; i++)
//	{
//		data[i] = new T[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			data[i][j] = ref.data[i][j];
//		}
//	}
//}
//template <class T>
//Matrix<T>::Matrix(int r, int c)
//{
//	rows = r;
//	cols = c;
//	data = new T*[rows];
//	for (int i = 0; i < rows; i = i + 1)
//	{
//		data[i] = new T[cols];
//	}
//}
//template <class T>
//Matrix<T>::~Matrix()
//{
//	
//		delete [] data;
//	
//}
////template <typename T>
////ostream & operator<<(ostream & str, const Matrix<T> & ref)
////{
////	for (int i = 0; i < ref.getRow(); i++)
////	{
////		for (int j = 0; j < ref.getCols(); j++)
////		{
////			str << ref.data[i][j];
////		}
////	}
////	return str;
////}
////
////template <typename T>
////istream &operator>>(istream & istr, const Matrix<T> &ref)
////{
////	for (int i = 0; i < ref.getRow(); i++)
////	{
////		for (int j = 0; j < ref.getCols(); j++)
////		{
////			istr >> ref.data[i][j];
////		}
////	}
////	return istr;
////}
////template <class T>
////void Matrix<T>::setRow(int r)
////{
////	rows = r;
////}
////template <class T>
////void Matrix<T>::setColumn(int c)
////{
////	cols = c;
////}
////template <class T>
////int Matrix<T>::getRow() const
////{
////	return rows;
////}
////template <class T>
////int Matrix<T>::getCols() const
////{
////	return cols;
////}
////
////
////
////template <class T>
////void Matrix<T>::printMatrix()
////{
////	cout << "{\n";
////	for (int i = 0; i < rows; i++)
////	{
////		
////		for (int j = 0; j < cols; j++)
////		{
////			cout <<" "<< data[i][j];
////		}
////		cout << " \n";
////	}
////	
////	cout << "}";
////}
////
////template <class T>
////int Matrix<T>::isIdentity()
////{
////	int status1 = 1;
////	int status2 = 1;
////	for (int i = 0; i < rows; i = i + 1)
////	{
////		for (int j = 0; j < cols; j = j + 1)
////		{
////			if (i == j)
////			{
////				if (data[i][j] != 1)
////				{
////					status1 = 0;
////				}
////			}
////			if (i != j)
////			{
////				if (data[i][j] != 0)
////				{
////					status2 = 0;
////				}
////			}
////		}
////	}
////	if (status1 == 1 && status2 == 1)
////		return 1;
////	else
////		return 0;
////	return 0;
////}
////template <class T>
////bool Matrix<T>::isUpperTriangular() const
////{
////	int flag1 = 0;
////	int flag2 = 0;
////	int status1 = 1;
////	int status2 = 1;
////
////	for (int i = 0; i < rows; i = i + 1)
////	{
////		for (int j = 0; j < cols; j = j + 1)
////		{
////			if (i == j)
////			{
////				if (data[i][j] != 0 && flag1 == 0)
////				{
////					status1 = 0;
////					flag1 = 1;
////				}
////			}
////			if (i > j)
////			{
////				if (data[i][j] != 0 && flag2 == 0)
////				{
////					status2 = 0;
////					flag2 = 1;
////				}
////			}
////
////		}
////		if (status1 && status2 )
////			return true;
////		else
////			return false;
////
////
////	}
////}
////template <class T>
////bool Matrix<T>::isLowerTriangular() const
////{
////	int flag1 = 0;
////		int flag2 = 0;
////		int status1 = 1;
////		int status2 = 1;
////		
////		for (int i = 0; i < rows; i = i + 1)
////		{
////			for (int j = 0; j < cols; j = j + 1)
////			{
////				if (i == j)
////				{
////					if (data[i][j] != 0 && flag1==0)
////					{
////						status1 = 0;
////						flag1 = 1;
////					}
////				}
////				if (i < j)
////				{
////					if (data[i][j] != 0 && flag2 == 0)
////					{
////						status2 = 0;
////						flag2 = 1;
////					}
////				}
////				
////			}
////			if (status1 == 1 && status2 == 1)
////				return 1;
////			else
////				return 0;
////	
////				
////			}
////		return false;
////}
////template <class T>
////bool Matrix<T>::isNull() const
////{
////	for (int i = 0; i < rows; i = i + 1)
////	{
////		for (int j = 0; j < cols; j = j + 1)
////		{
////			if (data[i][j] != 0)
////				return false;
////		}
////	}
////	return true;
////}
////template <class T>
////bool Matrix<T>::isDiagonal()
////{ 
////	
////	for (int i = 0; i < rows; i = i + 1)
////	{
////		for (int j = 0; j < cols; j = j + 1)
////		{
////			if (i != j)
////			{
////			if (data[i][j] != 0)
////					return false;
////			}
////		}
////	}
////	return true;
////}
////template <class T>
////bool Matrix<T>::isTriangular() const
////{
////	if(isUpperTriangular() || isLowerTriangular())
////	return true;
////	else 
////		return false;
////}
////template <class T>
////bool Matrix<T>::isRectangular() const
////{
////	if (this->rows != this->cols)
////		return true;
////	else
////		return false;
////}
////template <class T>
////bool Matrix<T>::isEqual(const Matrix & ref) const
////{
////	if (rows == ref.rows && cols == ref.cols)
////	{
////		for (int i = 0; i < rows; i++)
////		{
////			for (int j = 0; j < cols; j++)
////			{
////			if (data[i][j] != ref.data[i][j])
////					return false;
////			}
////		}
////	}
////	return true;
////}
////template <class T>
////bool Matrix<T>::isSymetric()
////{
////	Matrix trans =  getTranspose();
////	
////	if (this->isEqual(trans))
////	{
////		return true;
////	}
////	else
////		return false;
////}
////template <class T>
////bool Matrix<T>::isSkewSymetric()
////{
////	Matrix trans = getTranspose();
////	trans.at(0, 0) = -1;
////	trans.at(1, 1) = -3;
////	trans.at(0, 1) = -2;
////	trans.at(1, 0) = -2;
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < cols; j++)
////		{
////			trans.data[i][j] = -1 * trans.data[i][j];
////		}
////	}
////	if (this->isEqual(trans))
////		return true;
////	else
////		return false;
////
////
////	return false;
////}
////template <class T>
////void Matrix<T>::resize(int rows, int cols)
////{
////	this->~ Matrix();
////	this->rows = rows;
////	this->cols = cols;
////	data = new T*[rows];
////	for (int i = 0; i < rows; i++)
////	{
////		data[i] = new T[cols];
////	}
////
////
////}
////
////
////template <class T>
////void Matrix<T>::operator=(const Matrix<T> & ref)
////{
////	this->~Matrix();
////	this->rows = ref.rows;
////	this->cols = ref.cols;
////	this->data = new T*[rows];
////	for(int i=0;i<rows;i++)
////	{
////		data[i] = new T[cols];
////	}
////	for (int i = 0; i < rows; i = i + 1)
////	{
////		for (int j = 0; j < cols; j = j + 1)
////		{
////			data[i][j] = ref.data[i][j];
////		}
////	}
////}
////template <class T>
////Matrix<T> Matrix<T>::getTranspose()
////{
////	Matrix<T> temp(this->rows,this->cols);
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < cols; j++)
////		{
////			temp.data[i][j] = this->data[j][i];
////		}
////	}
////
////	return temp;
////	
////}
////template <class T>
////Matrix<T> Matrix<T>::operator+(const Matrix<T> & ref)
////{
////	if (rows == ref.rows && cols == ref.cols)
////	{
////		Matrix<T> temp(rows,cols);
////		for (int i = 0; i < rows; i++)
////		{
////			for (int j = 0; j < cols; j++)
////			{
////				temp.data[i][j] = this->data[i][j] + ref.data[i][j];
////			}
////		}
////		return temp;
////	}
////	exit(0);
////}
////template <class T>
////Matrix<T> Matrix<T>::operator-(const Matrix<T> & ref)
////{
////	Matrix<T> temp(rows, cols);
////	if (rows == ref.rows && cols == ref.cols)
////	{
////		
////		
////		for (int i = 0; i < rows; i++)
////		{
////			for (int j = 0; j < cols; j++)
////			{
////				temp.data[i][j] = this->data[i][j] - ref.data[i][j];
////			}
////		}
////		return temp;
////	}
////	return temp;
////}
////template <class T>
////Matrix<T> Matrix<T>::operator*(const Matrix<T> & ref)
////{
////	Matrix<T> temp(this->rows,ref.cols);
////	for (int i = 0; i < temp.rows; i++)
////	{
////		for (int j = 0; j < temp.cols; j++)
////		{
////			temp.data[i][j] = 0;
////		}
////	}
////	if(this->cols==ref.rows)
////	{
////		
////	
////		for(int i=0;i<this->rows;++i)
////		{
////			for(int j=0;j<ref.cols;++j)
////			{
////				for (int k = 0; k < this->cols; ++k)
////				{
////					temp.data[i][j] = temp.data[i][j]+ data[i][k] * ref.data[k][j];
////				}
////			}
////		}
////		return temp;
////	}
////	return temp;
////}
//template<class T>
//T& Matrix<T>::at(int r, int c)
//{
//	return data[r][c];
//}
//
