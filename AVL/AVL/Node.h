#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
template <typename T>
class Node
{
public:
	T info;
	int height;
	Node<T>*left, *right;
	Node()
	{
		info = 0;
		height = 1;
		left = nullptr;
		right = nullptr;
	}

	Node(T val)
	{
		info = val;
		height = 1;
		left = nullptr;
		right = nullptr;
	}

};

#endif

