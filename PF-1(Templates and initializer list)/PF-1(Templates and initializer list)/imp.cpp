#include"MyArray.cpp"
#include <iostream>
using namespace std;

template<>
void MyArray<MyArray<int>>::resize(int c)
{

	MyArray<int> *temp = new  MyArray<int>[this->capacity];
	int tempCap = this->capacity;
	for (int i = 0; i < this->capacity; i++)
	{
		temp[i] =data[i];
	}
	this->capacity = c;
	this->~MyArray();
	data = new MyArray<int>[this->capacity];
	for (int i = 0; i < tempCap; i++)
	{
		data[i] = temp[i];
	}
}

template class MyArray<int>;
template class MyArray<char>;
template class MyArray<double>;
template class MyArray<MyArray<int>>;
template class MyArray<MyArray<MyArray<double>>>;


//template class MyArray < MyArray < int > >;
//template class MyArray < MyArray < double > >;


