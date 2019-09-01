#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
template <typename T>
struct Node
{
	T info;
	Node<T>*left;
	Node<T>*right;
	Node()
	{
		left = nullptr;
		right = nullptr;
	}
	Node(T val)
	{
		info = val;
		left = nullptr;
		right = nullptr;
	}
};

#endif