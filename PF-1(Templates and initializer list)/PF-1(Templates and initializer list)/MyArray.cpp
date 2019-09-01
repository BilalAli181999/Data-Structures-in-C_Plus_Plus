#include "MyArray.h"

#include <iostream>
using namespace std;

template <class T>
MyArray<T>::MyArray(int c)
{
	
		capacity = c;
		data = new T[capacity];
		int noOfElements = c;
	
}
template<class T>
MyArray<T>::MyArray(const MyArray<T> & ref)
{
	this->capacity = ref.capacity;
		this->data = new T[capacity];
		for (int i = 0; i < capacity; i++)
		{
			this->data[i] = ref.data[i];
		}
}

template<class T>
T & MyArray<T>::operator[](int i)
{
	return data[i];
}

//template<class T>
//void MyArray<T>::display()
//{
//	cout << "\n[";
//	for (int i = 0; i < capacity; i++)
//	{
//		cout << data[i] << " ";
//	}
//	
//	cout << "]\n";
//}

template<class T>
MyArray<T>::~MyArray()
{
	if(data)
		delete[]data;

		data = 0;
}
template<class T>
MyArray<T>::MyArray(initializer_list <T> list)
{
	this->capacity = list.size();
	this->data = new T[capacity];
	const T *val = list.begin();
	for (int i = 0; i < capacity; i++)
	{
		data[i] = *val;
		val++;
	}
}
template<class T>
MyArray<T> & MyArray<T>::operator=(const MyArray<T> &ref)
{
	if (data)
	{
		this->~MyArray();
	}
		
	this->capacity = ref.capacity;
	this->data = new T[capacity];
	for (int i = 0; i < capacity; i++)
	{
		this->data[i] = ref.data[i];
	}
	return (*this);
}

template<typename T>
MyArray<T>  MyArray<T>::operator+(const T  ref)const
{
	MyArray<T> temp;
	int c = 0;
	for (int i = 0; i < this->capacity; i++)
	{
		temp.data[i] = this->data[c];
		c++;
	}
	for (int i = 0; i < this->capacity; i++)
	{
		temp.data[c] = ref.data[i];
		c++;
	}
	return temp;
}







template <class T>
ostream& operator<<(ostream &str, MyArray<T> &ref)
{
	str<< "\n[";
	for (int i = 0; i < ref.capacity; i++)
	{
		str << ref.data[i] << " ";
	}
	str << "]\n";
	return str;
}
template <class T>
istream& operator>>(istream &str, MyArray<T> &ref)
{
	//str << "\n[";
	for (int i = 0; i < ref.capacity; i++)
	{
	 	str >> ref.data[i];
	}
	//str << "]\n";
	return str;
}
template<typename T>
int MyArray<T>::getCapacity()
{
	return capacity;
}
template <typename T>
void MyArray<T>::resize(int c)
{
	
	T *temp = new T[this->capacity];
	int tempCap = this->capacity;
	for (int i = 0; i < this->capacity; i++)
	{
		temp[i] = data[i];
	}
	this->capacity = c;
	this->~MyArray();
	data = new T[this->capacity];
	for (int i = 0; i < tempCap ; i++)
	{
		data[i] = temp[i];
	}
}

