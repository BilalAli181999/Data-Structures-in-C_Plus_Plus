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
	Node();
	Node(T val);
	
};
#endif

