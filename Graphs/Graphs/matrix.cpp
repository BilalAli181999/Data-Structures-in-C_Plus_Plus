#include "matrix.h"
#include<iostream>
using namespace std;
Matrix::Matrix()
{
	
	rows = 2;
	cols = 2;
	data = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		data[i] = new int[cols];
	}
	
}

Matrix::Matrix(const Matrix & ref)
{
	this->rows = ref.rows;
	this->cols = ref.cols;
	this->data = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		data[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			data[i][j] = ref.data[i][j];
		}
	}
}

Matrix::Matrix(int r, int c)
{
	rows = r;
	cols = c;
	data = new int*[rows];
	for (int i = 0; i < rows; i = i + 1)
	{
		data[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			data[i][j] = 0;
		}
	}
}

Matrix::~Matrix()
{
	
		delete [] data;
	
}

void Matrix::setRow(int r)
{
	rows = r;
}

void Matrix::setColumn(int c)
{
	cols = c;
}

int Matrix::getRow() const
{
	return rows;
}

int Matrix::getCols() const
{
	return cols;
}

int & Matrix::at(const int r, const int c)
{
	return data[r][c];
}

void Matrix::printMatrix()
{
	cout << "{\n";
	for (int i = 0; i < rows; i++)
	{
		
		for (int j = 0; j < cols; j++)
		{
			cout <<"\t "<< data[i][j];
		}
		cout << " \n";
	}
	
	cout << "}";
}

int Matrix::isIdentity()
{
	int status1 = 1;
	int status2 = 1;
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			if (i == j)
			{
				if (data[i][j] != 1)
				{
					status1 = 0;
				}
			}
			if (i != j)
			{
				if (data[i][j] != 0)
				{
					status2 = 0;
				}
			}
		}
	}
	if (status1 == 1 && status2 == 1)
		return 1;
	else
		return 0;
	return 0;
}

bool Matrix::isUpperTriangular() const
{
	int flag1 = 0;
	int flag2 = 0;
	int status1 = 1;
	int status2 = 1;

	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			if (i == j)
			{
				if (data[i][j] != 0 && flag1 == 0)
				{
					status1 = 0;
					flag1 = 1;
				}
			}
			if (i > j)
			{
				if (data[i][j] != 0 && flag2 == 0)
				{
					status2 = 0;
					flag2 = 1;
				}
			}

		}
		if (status1 && status2 )
			return true;
		else
			return false;


	}
}

bool Matrix::isLowerTriangular() const
{
	int flag1 = 0;
		int flag2 = 0;
		int status1 = 1;
		int status2 = 1;
		
		for (int i = 0; i < rows; i = i + 1)
		{
			for (int j = 0; j < cols; j = j + 1)
			{
				if (i == j)
				{
					if (data[i][j] != 0 && flag1==0)
					{
						status1 = 0;
						flag1 = 1;
					}
				}
				if (i < j)
				{
					if (data[i][j] != 0 && flag2 == 0)
					{
						status2 = 0;
						flag2 = 1;
					}
				}
				
			}
			if (status1 == 1 && status2 == 1)
				return 1;
			else
				return 0;
	
				
			}
		return false;
}

bool Matrix::isNull() const
{
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			if (data[i][j] != 0)
				return false;
		}
	}
	return true;
}

bool Matrix::isDiagonal()
{ 
	
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			if (i != j)
			{
				if (data[i][j] != 0)
					return false;
			}
		}
	}
	return true;
}

bool Matrix::isTriangular() const
{
	if(isUpperTriangular() || isLowerTriangular())
	return true;
	else 
		return false;
}

bool Matrix::isRectangular() const
{
	if (this->rows != this->cols)
		return true;
	else
		return false;
}

bool Matrix::isEqual(const Matrix & ref) const
{
	if (rows == ref.rows && cols == ref.cols)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (data[i][j] != ref.data[i][j])
					return false;
			}
		}
	}
	return true;
}

bool Matrix::isSymetric()
{
	Matrix trans =  getTranspose();
	
	if (this->isEqual(trans))
	{
		return true;
	}
	else
		return false;
}

bool Matrix::isSkewSymetric()
{
	Matrix trans = getTranspose();
	trans.at(0, 0) = -1;
	trans.at(1, 1) = -3;
	trans.at(0, 1) = -2;
	trans.at(1, 0) = -2;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			trans.data[i][j] = -1 * trans.data[i][j];
		}
	}
	if (this->isEqual(trans))
		return true;
	else
		return false;


	return false;
}

void Matrix::resize(int rows, int cols)
{
	this->~ Matrix();
	this->rows = rows;
	this->cols = cols;
	data = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		data[i] = new int[cols];
	}


}
//
//int & Matrix::operator[][](int r, int c)
//{
//	return data[r][c];
//}

void Matrix::operator=(const Matrix & ref)
{
	this->~Matrix();
	this->rows = ref.rows;
	this->cols = ref.cols;
	this->data = new int *[rows];
	for(int i=0;i<rows;i++)
	{
		data[i] = new int[cols];
	}
	for (int i = 0; i < rows; i = i + 1)
	{
		for (int j = 0; j < cols; j = j + 1)
		{
			data[i][j] = ref.data[i][j];
		}
	}
}

Matrix Matrix::getTranspose()
{
	Matrix temp(this->rows,this->cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp.data[i][j] = this->data[j][i];
		}
	}

	return temp;
	
}

Matrix Matrix::operator+(const Matrix & ref)
{
	if (rows == ref.rows && cols == ref.cols)
	{
		Matrix temp(rows,cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				temp.data[i][j] = this->data[i][j] + ref.data[i][j];
			}
		}
		return temp;
	}
	exit(0);
}

Matrix Matrix::operator-(const Matrix & ref)
{
	Matrix temp(rows, cols);
	if (rows == ref.rows && cols == ref.cols)
	{
		
		
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				temp.data[i][j] = this->data[i][j] - ref.data[i][j];
			}
		}
		return temp;
	}
	return temp;
}

Matrix Matrix::operator*(const Matrix & ref)
{
	Matrix temp(this->rows,ref.cols);
	for (int i = 0; i < temp.rows; i++)
	{
		for (int j = 0; j < temp.cols; j++)
		{
			temp.data[i][j] = 0;
		}
	}
	if(this->cols==ref.rows)
	{
		
	
		for(int i=0;i<this->rows;++i)
		{
			for(int j=0;j<ref.cols;++j)
			{
				for (int k = 0; k < this->cols; ++k)
				{
					temp.data[i][j] = temp.data[i][j]+ data[i][k] * ref.data[k][j];
				}
			}
		}
		return temp;
	}
	return temp;
}

ostream & operator<<(ostream & str,const Matrix & ref)
{
	for (int i = 0; i < ref.getRow(); i++)
	{
		for (int j = 0; j < ref.getCols(); j++)
		{
			str << ref.data[i][j];
		}
	}
	return str;
}


istream &operator>>(istream & istr, const Matrix &ref)
{
	for (int i = 0; i < ref.getRow(); i++)
	{
		for (int j = 0; j < ref.getCols(); j++)
		{
			istr >> ref.data[i][j];
		}
	}
	return istr;
}