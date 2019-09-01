#ifndef MYARRAY_H
#define MYARRAY_H
#include<iostream>
#include<initializer_list>


using namespace std;
template<typename T>
class MyArray
{
private:
	int capacity;
	T *data;
public:
	int getCapacity();
	void resize(int c);
	MyArray(int c=1);
	MyArray(const MyArray<T>&);
	T & operator[](int i);
	void display();
	~MyArray();
	MyArray(initializer_list <T> list);
	MyArray<T> & operator=(const MyArray<T> &);
	T operator + (T  ref);

	


//	friend ostream& operator<<(ostream &str, MyArray<T> &ref);
	//friend istream& operator>>(istream &str, MyArray<T> &ref);
};

#endif
