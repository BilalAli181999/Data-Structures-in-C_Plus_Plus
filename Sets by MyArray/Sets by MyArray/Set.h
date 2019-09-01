#ifndef SET_H
#define SET_H
#include"MyArray.h"
template <class T>
class Set
{
	T* arr;
	int noE;
public:
	Set()
	{
		noE = 0;
		arr = new T[1];
	}
	void display()
	{
		for (int i = 0; i < noE; i++)
		{
			cout << arr[i];
		}
	}
	void insert(int element)
	{
		arr[noE] = element;
		noE++;
	}
	T& operator[](int i)
	{
		return arr.operator[i];
	}

};

#endif

