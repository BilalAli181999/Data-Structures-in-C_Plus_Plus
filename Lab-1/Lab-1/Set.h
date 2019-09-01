#ifndef Set_H
#define Set_H
#include<ostream>
#include<initializer_list>
using namespace std;
//class Set;


template <typename T>
class Set
{
private:
	T *data;
	int noOfElements;
	int capacity;
public:

	Set(int cap = 5);

	Set(Set<T> & ref);
	bool insert(T element);
	bool remove(T element);
	int getCardinallity();
	Set<T> calcUnion(Set<T> & s2);
	void display();
	bool isMember(int val)const;
	int isSubSet(Set<T> & s2);
	void resize(int  newCapacity);
	Set<T> calcIntersection(Set<T> & s2);//////////////////
	
};
//void f(Set &,Set &,Set &);
#endif // !Set_H
