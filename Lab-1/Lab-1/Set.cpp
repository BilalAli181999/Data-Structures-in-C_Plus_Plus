#include<iostream>
#include"Set.h"

using namespace std;


template <typename T>
Set<T>::Set(int cap)
{
	if (cap > 0)
	{
		
		capacity = cap;
	}
	else
	{
		
		capacity = 5;
		
	}
	data = new T[capacity];
	noOfElements = 0;
}

template <typename T>
Set<T>::Set(Set<T> & ref)
{
	
	noOfElements = ref.noOfElements;
	capacity = ref.capacity;
	data = new T[capacity];
	for (int i = 0; i < noOfElements; i++)
	{
		data[i] = ref.data[i];
	}
	
}


template <typename T>
bool Set<T>::insert(T element)
{
	data[noOfElements] = element;
	noOfElements++;
	return true;
}

template <typename T>
bool Set<T>::remove(T element)
{
	bool status = 0;
	if (isMember(element))
	{
		bool status = 0;
		for (int i = 0; i < noOfElements && (!status); i++)
		{


			if (data[i] == element)
			{

				for (int s = i; s < noOfElements; s++)
				{
					data[s] = data[s + 1];

				}
				status = true;
				noOfElements--;
			}

		}
	}
	else
	{
		throw exception("Element Not Present");
	}

	return status;
}
template <typename T>
int Set<T>::getCardinallity()
{
	return noOfElements;
}

template <typename T>
Set<T> Set<T>::calcUnion(Set<T> & s2)
{
	
	Set<T> x(capacity+s2.capacity);
	
	for (int i = 0; i <noOfElements; i++)
	{
		x.data[x.noOfElements] = data[i];
		x.noOfElements++;
	}
	for (int i = 0; i < s2.noOfElements; i++)
	{
		x.data[x.noOfElements] = s2.data[i];
		x.noOfElements++;
	}
	
	Set<T> intersection=(*this).calcIntersection(s2);
	for(int i=0;i<intersection.noOfElements;i++)
	{
		
		x.remove(intersection.data[i]);
	}


	
	return x;
}
template <typename T>
Set<T> Set<T>::calcIntersection(Set<T> & s2)
{
	Set<T> x(capacity+s2->capacity);

	for (int i = 0; i < noOfElements; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if (data[i] == s2.data[j])
			{
			
				x.data[x.noOfElements] = data[i];
				x.noOfElements++;
			}
		}
	}

	return x;
}

template <typename T>
void Set<T>::display()
{
	cout << "{";
	for (int i = 0; i < noOfElements; i++)
	{
		cout << data[i];
		cout << " ";
	}
	cout << "}";
}



template <typename T>
bool Set<T>::isMember(int val)const
{
	for (int i = 0; i < noOfElements; i++)
	{
		if (data[i] == val)
		{
			return true;
		}
	}
	return 0;
}

template <typename T>
int Set<T>::isSubSet(Set<T> & s2)
{
	bool status = false;
	int c = 0;
	for (int i = 0; i < s2.noOfElements; i++)
	{
		for (int j = 0; j < noOfElements; j++)
		{
			if (s2.data[i] == data[j])
			{
				c++;
			}
		}
	}
	if (c == s2.noOfElements && c == noOfElements - 1)
	{
		return 1;
	}
	else if (c == noOfElements)
	{
		return 2;
	}
	else
	{
		return 0;
	}
	
}
template <typename T>
void Set<T>::resize(int newCapacity)
{
	int c = 0;
	T *a = new T[capacity];

	for(int i=0;i<noOfElements;i++)
	{
		a[i] = data[i];
		c++;
	}
	capacity = newCapacity;
	data = new T[capacity];
	noOfElements = c;
	for (int i = 0; i < newCapacity; i++)
	{
		data[i] =a[i];
	}
	
}




