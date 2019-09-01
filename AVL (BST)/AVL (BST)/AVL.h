#ifndef AVL_H
#define AVL_H
#include"Node.h"
#include<iostream>
using namespace std;
template <typename T>
class AVL
{
public:
	Node<T> *root;
	AVL();
	void setRoot(int);
	int balanceFactor(Node<T>*p);
	int heightOfTree(Node<T>*p);
};
#endif


