#ifndef MYARRAY_H
#define MYARRAY_H
#include<iostream>
#include<initializer_list>
#include"cstring.h"

using namespace std;
template<typename T>
class MyArray:public string
{
public:
	
	int capacity;
	T *data;
public:
	int getCapacity();
	void resize(int c);
	MyArray(int c=1);
	MyArray(const MyArray<T>&);
	T & operator[](int i);
	//void display();
	~MyArray();
	MyArray(initializer_list <T> list);
	MyArray<T> & operator=(const MyArray<T> &);
	MyArray<T> operator + (const T  ref)const;

	


//	friend ostream& operator<<(ostream &str, MyArray<T> &ref);
	//friend istream& operator>>(istream &str, MyArray<T> &ref);
};
template<>
class MyArray<char*>:public MyArray<cstring>
{
using MyArray<cstring>::MyArray;	

	
};

#endif
