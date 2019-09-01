#ifndef DISJOINTSET_H
#define DISJOINTSET_H
#include"Node.h"
#include<iostream>
using namespace std;

template <typename T>
class DisjointSet
{
	Node<T>* id;
	int arraySize;
public:
	DisjointSet(int size)
	{
			 arraySize = size;
			 id = new Node<T>[arraySize];
			 for (int i = 0.; i < size; i++)
			 {
				 id[i].parent = i;
			 }
    }
	void displayArray()
	{
			 for (int i = 0; i < arraySize; i++)
			 {
				 cout <<"|"<<i<<"|"<< id[i].parent << "|\n";
			 }
		 }
	void mergeNodes(int a, int b)
	{
			 if (b < arraySize && a < arraySize)
			 {
				 a = getParent(a);
				 id[b].parent = a;
			 }
			 else
				 cout << "\n Index Out Of Bound";
		 }
	void unionNodes(int a, int b)
	{
		if (id[a].parent==a )
		{
			id[b].parent = a;
		}
		else
		{
			a = getParent(a);
			id[b].parent = a;
		}
			
	}
	int getParent(int i)
	{
		while (id[i].parent != i)
		{
			i = id[i].parent;
		}
		return i;
	}
	bool find(int first,int second)
	{
		if (id[first].parent == id[second].parent)
		{
			return true;
			
		}
		else
		{
			while (id[first].parent != first)
			{
				first = id[first].parent;
			}
			while (id[second].parent != second)
			{
				second = id[second].parent;
			}
			if (first == second)
			{
				return true;
			}
			return false;
		}
			
			
	}

	

};
#endif 
