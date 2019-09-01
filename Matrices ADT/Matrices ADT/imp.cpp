#include"matrix.cpp"
//template <typename T>



template <>
void Matrix<int>::printMatrix()
{
	cout << "{\n";
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < cols; j++)
		{
			cout << " " << data[i][j];
		}
		cout << " \n";
	}

	cout << "}";
}

//template <typename T>
template<>
void Matrix<Matrix<int>>::printMatrix()
{
	for (int i = 0; i < getRow(); i++)
	{
		for (int j = 0; j < getCols(); j++)
		{
			for (int x = 0; x < data[i][j].getRow(); x++)
			{
				for (int z = 0; z < data[i][j].getCols(); z++)
				{
					cout << data[i][j].data[x][z];
				}
				cout << "\n";
			}
		}
	}
}
//template class Matrix <int>;
//template class Matrix <double>;
//template class Matrix <Matrix<int>>;
template class Matrix <cstring>;
//template class Matrix <Matrix<cstring>>;